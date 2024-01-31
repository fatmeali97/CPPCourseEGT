#include "Box.h"

Box::Box(){}
Box::Box(double lenght, double height, double width)
{
    SetHeight(height);
    SetWidth(width);
    SetLenght(lenght);
}

void Box::SetLenght(double lenght)
{
    if (lenght <= 0)
    {
        std::cout << "The number should be bigger than 0;" << std::endl;
        this->m_lenght = 1;
    }
    else
    {
        this->m_lenght = lenght;
    }
}

double Box::GetLenght()
{
    return m_lenght;
}

void Box::SetHeight(double height)
{
    if (height <= 0)
    {
        std::cout << "The number should be bigger than 0;" << std::endl;
        this->m_height = 1;
    }
    else
    {
        this->m_height = height;
    }
}

double Box::GetHeight()
{
    return m_height;
}

void Box::SetWidth(double width)
{
    if (width <= 0)
    {
        std::cout << "The number should be bigger than 0;" << std::endl;
        this->m_width = 1;
    }
    else
    {
        this->m_width = width;
    }
}

double Box::GetWidth()
{
    return m_width;
}

Box Box::operator+(Box b)
{
    Box box;
    box.m_lenght = m_lenght + b.m_lenght;
    box.m_width = m_width + b.m_width;
    box.m_height = m_height + b.m_height;

    return box;
}
