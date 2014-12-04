#include "gdb/Sparksee.h"
#include "gdb/Database.h"
#include "gdb/Session.h"
#include "gdb/Graph.h"
#include "gdb/Objects.h"
#include "gdb/ObjectsIterator.h"
#include <iostream>

using namespace sparksee::gdb;

int main(int argc, char *argv[])
{
    SparkseeConfig cfg;
    Sparksee *sparksee = new Sparksee(cfg);
    Database *db = sparksee->Create(L"./sparksee_db/dobbo_db.gdb", L"./sparksee_db/dobbo_db");
    Session *sess = db->NewSession();
    Graph *g = sess->GetGraph();

	delete sess;
	delete db;
	delete g;
}
