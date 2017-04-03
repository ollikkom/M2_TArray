#ifndef M2_TARRAY_TARRAY_H
#define M2_TARRAY_TARRAY_H

#include <iostream>
#include <exception>
#include <initializer_list>

template <class T, std::size_t N>

struct TArray {
    using value_type = T;
    using size_type = size_t;
    using iterator = value_type *;
    using reference = value_type&;
    using const_reference = const value_type&;

    value_type Mas[N];

    TArray() = default;

    ~TArray() = default;

    reference at(size_type elem)
    {
        if (elem < 0 || elem > N)
            throw std::out_of_range("Out of range!");
        else return Mas[elem];
    }

    const_reference at(size_type elem) const
    {
        if (elem < 0 || elem > N)
            throw std::out_of_range("Out of range!");
        else return Mas[elem];
    }

    reference operator[] (size_type elem)
    {
        return Mas[elem];
    }

    const_reference operator[] (size_type elem) const
    {
        return Mas[elem];
    }

    reference front()
    {
        return Mas[0];
    }

    const_reference front() const
    {
        return Mas[0];
    }

    reference back()
    {
        return Mas[N - 1];
    }

    const_reference back() const
    {
        return Mas[N - 1];
    }

    iterator begin() throw()
    {
        return Mas;
    }

    iterator end() throw()
    {
        return Mas + N;
    }

    iterator data() throw()
    {
        return Mas;
    }

    const iterator data() const throw()
    {
        return Mas;
    }

    size_type size() const throw()
    {
        return N;
    }

    size_type max_size() const throw()
    {
        return N;
    }

    bool empty() const throw()
    {
        return size() == 0;
    }

    void fill(const value_type& value)
    {
        for (size_type i = 0; i < N; ++i)
            Mas[i] = value;
    }

    void swap(TArray<T, N> & ab) throw()
    {
        std::swap(Mas, ab.Mas);
    }

    TArray(std::initializer_list<T> init) : TArray()
    {
        size_type a = 0;
        for ( auto & i: init)
        {
            Mas[a] = i;
            ++a;
        }
    }
};

#endif //M2_TARRAY_TARRAY_H
