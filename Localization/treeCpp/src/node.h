#include "ibex.h"

using region = std::vector< std::pair<int, int> >;

class Node
{

    public:
<<<<<<< HEAD
    Node();
    ~Node();
    void createBranch(std::vector< std::pair<region, Node*> > &leaves, region currentRegion);
    void fillNode();
    Node* left;
    Node* right;
    bool isALeaf;
    bool* p_isALeaf;


    ibex::Interval getItv();
    void setItv(ibex::Interval interval);

    
    private:
    ibex::Interval itv;
    short axis;
    //Node* left;
    //Node* right;
=======
	    Node();
	    ~Node();
	    void createBranch(std::vector< std::pair<region, Node*> > &leaves, region currentRegion);
	    void fillNode();


	    ibex::Interval getItv();
	    void setItv(ibex::Interval interval);
	    Node* getLeft();
	    Node* getRight();
	    short getAxis();

    
    private:
	    ibex::Interval itv;
	    short axis;
	    Node* left;
	    Node* right;
>>>>>>> upstream/master
};

std::pair<region, region> bissect(region rgn, int axis);
