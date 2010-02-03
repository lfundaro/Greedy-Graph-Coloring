fac a = fst $ real_fac (1,a)
    where
      real_fac (n,0) = (n,0)
      real_fac (n,m) = real_fac (n*m,m-1)  