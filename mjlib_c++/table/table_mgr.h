#pragma once

#include "table.h"

#define MAX_GUI_NUM 4

class TableMgr
{
public:
    static TableMgr* get_instance();

    ~TableMgr();

	void add(int key, int gui_num, bool eye, bool chi);

	bool check(int key, int gui_num, bool eye, bool chi);

	bool load();

	bool dump_table();

	bool dump_feng_table();

private:
	void init();

	void destory();

    static TableMgr* s_sharedInstance;

	Table* m_check_table[MAX_GUI_NUM+1];
	Table* m_check_eye_table[MAX_GUI_NUM + 1];
	Table* m_check_feng_table[MAX_GUI_NUM + 1];
	Table* m_check_feng_eye_table[MAX_GUI_NUM + 1];
};
