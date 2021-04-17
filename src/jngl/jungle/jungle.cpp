#include <vector>
namespace nd {
    #include "../node/node.h"
}


class Jungle {

    public:
        void addNode(nd::Node& nd);

    private:
        std::vector<nd::Node*> nodes;

};


void Jungle::addNode(nd::Node& nd){

    this->nodes.push_back(&nd);

}