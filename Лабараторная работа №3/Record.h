#pragma once
#include <string>
template <class T>
class Record {
private:
	std::string name;
	T value;
public:
	Record <T>(std::string _nameT, T _value = T(0));
	Record<T>& operator=(const Record<T>& tmp);
	Record <T>(T _value = T(0));
	Record <T>(const Record <T>& tmp);
	~Record<T>();
	std::string get_name()const;
	T get_value()const;
	void set_value(const T& tmp);
};

template<class T>
inline Record<T>::Record(std::string _name, T _value) {
	name = _name;
	value = _value;
}

template<class T>
inline Record<T>::Record(T _value) {
	name = " ";
	value = _value;
}

template<class T>
inline Record<T>::Record(const Record<T>& tmp) {
	name = tmp.name;
	value = tmp.value;
}

template<class T>
inline Record<T>::~Record() {
}

template<class T>
inline Record<T>& Record<T>::operator=(const Record<T>& tmp) {
	if (this == &tmp) return *this;
	name = tmp.name;
	value = tmp.value;
	return *this;
}

template<class T>
inline std::string Record<T>::get_name() const {
	return this->name;
}

template<class T>
inline T Record<T>::get_value()const {
	return this->value;
}

template<class T>
inline void Record<T>::set_value(const T& tmp) {
	value = tmp;
}