#pragma once
#include "Common.h"
#include "Singleton.h"

class FormalWork :public Singleton<FormalWork>
{
public:
	/******************************************************************************
	 函数名称： calcEquation
	 功能说明： 除法求值-399
	 参    数： vector<vector<string>> & equations 
	 参    数： vector<double> & values 
	 参    数： vector<vector<string>> & queries 
	 返 回 值： std::vector<double>
	 作    者： Ru Long
	 日    期： 2021/01/06
	******************************************************************************/
	vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries);
	/******************************************************************************
	 函数名称： findCircleNum
	 功能说明： 省份数量-547
	 参    数： vector<vector<int>> & isConnected 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2021/01/07
	******************************************************************************/
	int findCircleNum(vector<vector<int>>& isConnected);
	/******************************************************************************
	 函数名称： rotate
	 功能说明： 旋转数组-189
	 参    数： vector<int> & nums 
	 参    数： int k 
	 返 回 值： void
	 作    者： Ru Long
	 日    期： 2021/01/08
	******************************************************************************/
	void rotate(vector<int>& nums, int k);
	/******************************************************************************
	 函数名称： summaryRanges
	 功能说明： 汇总区间228
	 参    数： vector<int> & nums 
	 返 回 值： std::vector<std::string>
	 作    者： Ru Long
	 日    期： 2021/01/10
	******************************************************************************/
	vector<string> summaryRanges(vector<int>& nums);
	/******************************************************************************
	 函数名称： smallestStringWithSwaps
	 功能说明： 1202-交换字符串
	 参    数： string s 
	 参    数： vector<vector<int>> & pairs 
	 返 回 值： std::string
	 作    者： Ru Long
	 日    期： 2021/01/11
	******************************************************************************/
	string smallestStringWithSwaps(string s, vector<vector<int>>& pairs);
	/******************************************************************************
	 函数名称： sortItems
	 功能说明： 项目管理-1203
	 参    数： int n 
	 参    数： int m 
	 参    数： vector<int> & group 
	 参    数： vector<vector<int>> & beforeItems 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2021/01/12
	******************************************************************************/
	vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems);
	/******************************************************************************
	 函数名称： findRedundantConnection
	 功能说明： 684-冗余连接
	 参    数： vector<vector<int>> & edges 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2021/01/13
	******************************************************************************/
	vector<int> findRedundantConnection(vector<vector<int>>& edges);
	/******************************************************************************
	 函数名称： prefixesDivBy5
	 功能说明： 可被5整数-1018
	 参    数： vector<int> & A 
	 返 回 值： std::vector<bool>
	 作    者： Ru Long
	 日    期： 2021/01/14
	******************************************************************************/
	vector<bool> prefixesDivBy5(vector<int>& A);
	/******************************************************************************
	 函数名称： removeStones
	 功能说明： 移除最多的石子-947
	 参    数： vector<vector<int>> & stones 
	 返 回 值： int
	 作    者： Ru Long
	 日    期： 2021/01/15
	******************************************************************************/
	int removeStones(vector<vector<int>> &stones);
	/******************************************************************************
	 函数名称： findNumOfValidWords
	 功能说明： 猜字谜-1178
	 参    数： vector<string> & words 
	 参    数： vector<string> & puzzles 
	 返 回 值： std::vector<int>
	 作    者： Ru Long
	 日    期： 2021/02/26
	******************************************************************************/
	vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles);
};

