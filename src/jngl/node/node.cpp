#include <string>
#include <vector>

namespace jngl {
    #include "../jungle/jungle.h"
}


class Node{

    public:
        Node(jngl::Jungle &jungle);

    private:
        jngl::Jungle* jungle;
        std::vector<Node*> nbs;
        std::vector<Node*> parents;
        std::vector<Node*> children;
        std::string value;
        
    friend class jngl::Jungle;

};

Node::Node(jngl::Jungle &jungle) : jungle(jungle*){
    jungle.addNode(&this);
}; 