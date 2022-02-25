set<int> value;
for (int i = 0; i < n; ++i)
{
    value.insert(a[i]);
}
map<int, int> comp;
for (auto &x : value)
{ 
    comp[x] = comp.size();
}
for (int i = 0; i < n; ++i)
{
    a[i] = comp[a[i]];
}	
