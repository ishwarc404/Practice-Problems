cost = int(input())

eqx =  int (( 34 * cost ) / 477 )

vals = [ eqx , eqx , 0]

used = ( (eqx/2)  + ((27*eqx)/2) ) 

cost_left = cost - used


no_jiggles =  ( cost_left * 2 ) * 17

vals[2] = int(no_jiggles)

if(vals[0]):
    print(vals[0],vals[1],vals[2])
else:
    print("-1 -1 -1")