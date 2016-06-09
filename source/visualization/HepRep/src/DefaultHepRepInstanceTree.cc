
#include "DefaultHepRepInstanceTree.h"

using namespace std;
using namespace HEPREP;

DefaultHepRepInstanceTree::DefaultHepRepInstanceTree(string name, string version, HepRepTreeID* typeTree)
    : DefaultHepRepTreeID(name, version), typeTree(typeTree) {
}

DefaultHepRepInstanceTree::~DefaultHepRepInstanceTree() {
    for (vector<HepRepInstance*>::iterator i1 = instances.begin(); i1 != instances.end(); i1++) {
        delete (*i1);
    }
    instances.clear();
}

void DefaultHepRepInstanceTree::overlay(HepRepInstanceTree *) {
    cerr << "DefaultHepRepInstanceTree::overlay(HepRepInstanceTree * instanceTree) not implemented." << endl;
}

HepRepInstanceTree* DefaultHepRepInstanceTree::copy(HepRepTypeTree*, HepRepSelectFilter*) {
    cerr << "DefaultHepRepInstanceTree::copy(HepRepTypeTree*, HepRepSelectFilter*) not implemented." << endl;
    return NULL;
}

void DefaultHepRepInstanceTree::addInstance(HepRepInstance* instance) {
    instances.push_back(instance);
}

void DefaultHepRepInstanceTree::removeInstance(HepRepInstance*) {
    cerr << "DefaultHepRepInstanceTree::removeInstance(HepRepInstance*) not implemented." << endl;
}

vector<HepRepInstance*> DefaultHepRepInstanceTree::getInstances() {
    return instances;
}

void DefaultHepRepInstanceTree::addInstanceTree(HepRepTreeID* treeID) {
    instanceTrees.insert(treeID);
}

HepRepTreeID* DefaultHepRepInstanceTree::getTypeTree() {
    return typeTree;
}

set<HepRepTreeID*> DefaultHepRepInstanceTree::getInstanceTrees() {
    return instanceTrees;
}
