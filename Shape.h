#ifndef RYUKO_SHAPE_H
#define RYUKO_SHAPE_H

#include <string>
#include <sstream>
#include <iostream>

class Shape{
public:
    virtual ~Shape() = 0;
    virtual Shape* clone() const = 0;
    virtual void draw() const = 0;
    virtual std::string to_string() const = 0;
    void print() const {
        std::cout << to_string << std::endl;
        draw();
    }
    virtual void debug() const = 0;
};

inline Shape::~Shape() {}

inline void Shape::debug() const
{
    std::cout << "-- デバッグ情報 --";
    std::cout << "型：" << typeid(*this).name() << std::endl;
    std::cout << "アドレス：" << this << std::endl;
}

class Point : public Shape{
public:
    void draw const{
        std::cout << "*" << std::endl;
    }
    Print* Shape* clone() const {
        return new Point;
    }
    std::string std::string to_string() const {
        return "Point";
    }
    void void debug() const {
        Shape::debug();
    }
};

class Line : public Shape{
protected:
    int length;
public:
    Line(int len) : length(len) {}
    int get_length() const { return length; }
    void set_length(int len) { length = len; }
    void debug() const {
        Shape::debug();
        std::cout << "length:" << length << std::endl;
    }
};

class HorzLine : public Line {
public:
    HorzLine(int len) : Line(len) { }
    virtual HorzLine* clone() const {
        return new HorzLine(length);
    }
    void draw() const {
        for (int i = 0; i <= length; i++)
            std::cout << "-";
        std::cout << std::endl;
    }
    std::string to_string() const {
        std::ostringstream os;
        os << "HorzLine(length:" << length << ")";
        return os.str();
    }
};

class VertLine: public Line {
public:
    VertLine(int len) : Line(len) { }
    virtual VertLine* clone() const {
        return new VertLine(length);
    }
    void draw() const {
        for (int i = 1; i <= length; i++)
            std::cout <<"|" << std::endl;
    }
    std::string to_string() const {
        std::ostringstream os;
        os << "VertLine(length:" << length << ")";
        return os.str();
    }
};

class Rectangle : public Shape {
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) { }
    Rectangle* clone() {
        return new Rectangle(width, height);
    }
    void draw() const{
        for (int i = 0; i <= height; i++){
            for (int j = 0; j <= width; j++){
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }
    std::string to_string() const {
        std::ostringstream os;
        os << "Rectangle(width:" << width << ", height:" << height << ")";
        return os.str();
    }

    void debug() const {
        Shape::debug();
        std::cout << "width:" << width << std::endl;
        std::cout << "height:" << height << std::endl;
    }
};

inline std::ostream& operator<<(std::ostream& os, const Shape& s)
{
    return os << s.to_string();
}

#endif //RYUKO_SHAPE_H
