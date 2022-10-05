// max sum of a interval in a vector
int max_sum(vector <int> s)
{
	int resp = 0, m = 0;

	for(int i = 0; i < s.size(); i++)
	{
		m = max(0, m + s[i]);

		resp = max(resp, m);
	}

	return resp;
}