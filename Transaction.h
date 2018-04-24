#ifndef Transaction_h
#define Transaction_h

#include "Account.h"

enum state
{
	Pending,
	Accepted,
	Rejected
};

class Customer;

class Transaction
{
public:
	Transaction(Account* sac, Account* dac, int a
		, std::vector<int> oids);

	void approve_transaction();
	void decline_transaction();
	void approve_owner(int oid);
	void decline_owner(int oid);
	void sets_account(Account* sap);
	void setd_account(Account* dap);
	void showTransaction();

private:
	Account* src_account;
	Account* des_account;
	int amount;
	std::vector<int> owners;
	state request;
	bool is_approved();
};

#endif
