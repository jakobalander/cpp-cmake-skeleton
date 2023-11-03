#ifndef SKELETON__LIB_HPP
#define SKELETON__LIB_HPP

class Skeleton {
    public:
        void greeting();
        std::string getString();
        void setString(std::string);

    private:
        std::string string{};
};

class TurtleIf {
    public:
        virtual ~TurtleIf() {};
        virtual void penDown() = 0;
};

class Painter {
    public:
        Painter(TurtleIf& turtle);
        bool drawLine(int x1, int y1, int x2, int y2);
    private:
        TurtleIf& turtle;
};

#endif
