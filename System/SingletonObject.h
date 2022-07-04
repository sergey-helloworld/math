#pragma once
#include <memory>
template<typename T>
class SingletonObject {
private:
    static std::shared_ptr<T> _instance;
public:
    template <typename... Args>
    static std::shared_ptr<T> getInstance(Args... args) {
        if (_instance == NULL) {
            _instance = std::make_shared<T>(args...);
        }
        return _instance;
    }
};

template <typename T>
std::shared_ptr<T> SingletonObject<T>::_instance;

