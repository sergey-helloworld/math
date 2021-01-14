#include "MathMain.h"
#include "CliCommandParser.h"

void MathMain::runCli(int argc, char* argv[]) {
    try {
        auto cmds = CliCommandParser::parse(argc, argv);
        for (auto& a : cmds) {
            a->execute();
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