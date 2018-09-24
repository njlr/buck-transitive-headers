# buck-transitive-headers 

`a` depends on `b` and `b` depends on `c`. Does this imply that `a` should be able to use the headers from `c` directly? What about symbols? 

In the version of Buck tested (`buck version v2017.11.16.0`), we found that `a` could access everything in `c`. 
