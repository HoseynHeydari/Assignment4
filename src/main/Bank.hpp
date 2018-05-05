#ifndef Bank_h
#define Bank_h

#include "Transaction.hpp"

class Bank
{
public:
	Bank(std::string name);

	void addCustomer(std::string n, std::string sn);
	void addAccount(std::vector<int> oid, int bl);
	void addOwner(int aid, int cid);
	void addTransaction(int said, int daid, int a);
	void approveTransaction(int tid, int oid);
	void declineTransaction(int tid, int oid);
	void showAccount(int aid);
	bool searchCustomer(std::string s1, std::string s2
		, std::vector<Customer*> customers);

private:
	std::string name;
	std::vector<Customer*> customers;
	std::vector<Account*> accuonts;
	std::vector<Transaction*> transactions;
};

#endif