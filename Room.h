class Room{

    private: 
        // Player * player;
        int width;
        int height;
        char ** map;

    public:
        Room(int x, int y);
        ~Room();
        void draw();
};