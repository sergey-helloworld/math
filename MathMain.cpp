#include "MathMain.h"
#include "CliCommandParser.h"
#include <memory>

void MathMain::runCli(int argc, char* argv[]) {
    try {
        auto cmds = CliCommandParser::parse(argc, argv);
        size_t count = 0;
        for (auto& a : cmds) {
            auto obj = std::dynamic_pointer_cast<MathCommand>(a);
            if (obj) {
                if (count > 0 && obj->getArgs().size() < 2) {
                    obj->addArgFront(std::dynamic_pointer_cast<MathCommand>(cmds[count - 1])->getResult());
                }
                a->execute();
                auto result = obj->getResult();
                result->print();
                std::cout << '\n' << std::endl;
                count++;
            }
            else {
                a->execute();
            }
        }
        //sample();
    }
    catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
}

void MathMain::sample() {
    auto m1 = std::vector<std::vector<std::shared_ptr<MathObject>>>{
        {
            std::make_shared<BasicNumber>(BasicNumber{14}),
            std::make_shared<BasicNumber>(BasicNumber{2}),
            std::make_shared<BasicNumber>(BasicNumber{2})
        },
        {
            std::make_shared<BasicNumber>(BasicNumber{8}),
            std::make_shared<BasicNumber>(BasicNumber{4}),
            std::make_shared<BasicNumber>(BasicNumber{2})
        }
    };

    auto m2 = std::vector<std::vector<std::shared_ptr<MathObject>>>{
        {
            std::make_shared<BasicNumber>(BasicNumber{14}),
            std::make_shared<BasicNumber>(BasicNumber{2})
        },
        {
            std::make_shared<BasicNumber>(BasicNumber{8}),
            std::make_shared<BasicNumber>(BasicNumber{4})
        },
        {
            std::make_shared<BasicNumber>(BasicNumber{8}),
            std::make_shared<BasicNumber>(BasicNumber{4})
        }
    };

    auto m1obj = Matrix{ m1 };
    auto m2obj = Matrix{ m2 };

    try {
        //auto res = m1obj * m2obj;
        auto res = m1obj * m2obj;
        res->print();
    }
    catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
}