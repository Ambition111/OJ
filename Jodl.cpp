int main()
{
	string str1 = "@!%12dgsa";
	string str2 = "010111100";

	for (auto& e : str1)
	{
		if (isalpha(e) || isdigit(e))
			e = '1';
		else
			e = '0';
	}

	double same = 0;
	for (size_t i = 0; i < str1.size(); ++i)
	{
		if ((str1[i] - '0') ^ ((str2[i]) - '0') == 0)
			++same;
	}
	cout << setprecision(4) << same * 100 / str2.size() << "%" << endl;
	return 0;
}
