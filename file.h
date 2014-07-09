class list{
private:
	const static int MaxinternalList_Count = 30;
	char*internalList[MaxinternalList_Count];
	unsigned int internalList_Count;
	unsigned int i;
public:
	int Add(char*ptToChar);
	int Add(int argc, char**argv);
	int PrintAll();
	int PrintNext();
	void ResetPrint();
	list();
};