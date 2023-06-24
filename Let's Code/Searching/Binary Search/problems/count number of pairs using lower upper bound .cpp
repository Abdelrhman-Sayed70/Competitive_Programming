tmp = power_of_tow - v[i];
auto low = lower_bound(v.begin() + i + 1, v.end(), tmp);
auto up = upper_bound(v.begin() + i + 1, v.end(), tmp);
ll index1 = low - v.begin();
ll index2 = up - v.begin();
cnt += index2 - index1;