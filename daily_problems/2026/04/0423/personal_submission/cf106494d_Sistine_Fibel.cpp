namespace sIsTiNeFiBeL {
  inline void Tempest_Flare__The_Wind_Splitting_Magic_Bullet() {
/**/INT(N);
  	VEC(ll, a, N);
  	sor(a);
  	vec(ll, suf, N + 1, 0);
  	rrep(i, 0, N) suf[i] = suf[i + 1] + a[i];
  	ll ans = -LINF;
  	rep(i, 0, N + 1) {
  		ll ss = suf[N - i];
  		ll tt = 0;
  		I L = N - i;
  		if(L > 0) {
  			if(L & 1) tt = 2 * a[(L - 1) / 2];
  			else tt = a[L / 2 - 1] + a[L / 2];
  		}
  		chmax(ans, 2 * ss + tt);
  	} 
  	out(ans);
return;};
}
