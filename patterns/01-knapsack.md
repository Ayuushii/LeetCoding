# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WFCZVX5K%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQDAtAHnpVQLTie9%2BtTka1ZqVDUXuLFm0I8LZc5i2piMcAIhAIs%2FF3WxVXj%2B81tR0isOjp%2BeujWTHSEmWEQVQNS7%2FR7kKv8DCBQQABoMNjM3NDIzMTgzODA1IgzLUk431G1UGMCbTC0q3AO6RZEBys%2BEVaTbyMEvbGPE8FuwgVVTKN102e1g%2BMKKf%2BDZwe8KDCTu3%2B3uQQAEnAgoLGmsqAabFU%2BPj1nmjv4ydf1BOxPbWnEeGTQznacu3skUyh7bKH1SfsJMCK23pgfmJruilC0aqw6I%2B0FSDNbMUlQ%2BaAMeZAXCTfxw3ulXhXJHXjWRX02dQbSgMlp0ZO2MdQ96sneuZC14gs6iPjkztGWmOa4FAGztI8CrH5zhQ3aTo1IBigiwpEAZPfpiROmo2b69kYpaBZVXOI9YvXh2Yazs2T6otDbgiiABhI%2FUoMqUAo2uHKpS1LeAhg%2FX3fudKYMtYyOvSMFpFki4AtvOATFBEjZ83f3gAQzbdG7rGqENJ5j8aOusYAOlsv9q1Uq3%2B8cw5uOHfXoKmABVkKgHiCSU1MgkWD1cxWHi96KBCMg3NEI%2FTP%2Fc45MFHX8A53FVCqPSLsPBAWNPQwkkltLOjswm6ZXP7mePypHHAyG5HK93njdGbnR7xUQ1R3v66Hf7U%2BuKnfMFfDfmjueNpkqzUAZ%2Bqr%2BH6U1IxQcvTem5hfZrGejHgTUqDXeMgDY7aMNztTBJKAuX6Fx%2F%2F3QX2BTk6B8J1KVbKvO1F6YckFJSZp3YK5RkoKTa73%2BWsTDr5obQBjqkAaIDdrHSE0b%2F5pgDPZafYHNmPL6xUUAFqeVmUQ1AK36LvJZW%2BvQEE4zCf19wa2AXJ9XON4z8E9IZ%2BjV7A5BbaKjrq%2B6iZdgWs9%2F9M9apfYLGcsd1RDptNSNXzRlTkHTSTcK3S8q4GwAb%2Bd6%2B6UihOpqw8oxtXTLrsXdAY3jSHOIXt2oWc3g93eSvjwc5VHZOHw3I%2BgL8V%2ByzWqGIo5h9jotxrJKr&X-Amz-Signature=66a42eca401fc56feb854eb1be3c50b3702fc73bd383a903d26167613b56e9ec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WFCZVX5K%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQDAtAHnpVQLTie9%2BtTka1ZqVDUXuLFm0I8LZc5i2piMcAIhAIs%2FF3WxVXj%2B81tR0isOjp%2BeujWTHSEmWEQVQNS7%2FR7kKv8DCBQQABoMNjM3NDIzMTgzODA1IgzLUk431G1UGMCbTC0q3AO6RZEBys%2BEVaTbyMEvbGPE8FuwgVVTKN102e1g%2BMKKf%2BDZwe8KDCTu3%2B3uQQAEnAgoLGmsqAabFU%2BPj1nmjv4ydf1BOxPbWnEeGTQznacu3skUyh7bKH1SfsJMCK23pgfmJruilC0aqw6I%2B0FSDNbMUlQ%2BaAMeZAXCTfxw3ulXhXJHXjWRX02dQbSgMlp0ZO2MdQ96sneuZC14gs6iPjkztGWmOa4FAGztI8CrH5zhQ3aTo1IBigiwpEAZPfpiROmo2b69kYpaBZVXOI9YvXh2Yazs2T6otDbgiiABhI%2FUoMqUAo2uHKpS1LeAhg%2FX3fudKYMtYyOvSMFpFki4AtvOATFBEjZ83f3gAQzbdG7rGqENJ5j8aOusYAOlsv9q1Uq3%2B8cw5uOHfXoKmABVkKgHiCSU1MgkWD1cxWHi96KBCMg3NEI%2FTP%2Fc45MFHX8A53FVCqPSLsPBAWNPQwkkltLOjswm6ZXP7mePypHHAyG5HK93njdGbnR7xUQ1R3v66Hf7U%2BuKnfMFfDfmjueNpkqzUAZ%2Bqr%2BH6U1IxQcvTem5hfZrGejHgTUqDXeMgDY7aMNztTBJKAuX6Fx%2F%2F3QX2BTk6B8J1KVbKvO1F6YckFJSZp3YK5RkoKTa73%2BWsTDr5obQBjqkAaIDdrHSE0b%2F5pgDPZafYHNmPL6xUUAFqeVmUQ1AK36LvJZW%2BvQEE4zCf19wa2AXJ9XON4z8E9IZ%2BjV7A5BbaKjrq%2B6iZdgWs9%2F9M9apfYLGcsd1RDptNSNXzRlTkHTSTcK3S8q4GwAb%2Bd6%2B6UihOpqw8oxtXTLrsXdAY3jSHOIXt2oWc3g93eSvjwc5VHZOHw3I%2BgL8V%2ByzWqGIo5h9jotxrJKr&X-Amz-Signature=5963c7f09610ae369efffca4d01052f16b0c79e04bde059e6d139ba9a221c706&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WFCZVX5K%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQDAtAHnpVQLTie9%2BtTka1ZqVDUXuLFm0I8LZc5i2piMcAIhAIs%2FF3WxVXj%2B81tR0isOjp%2BeujWTHSEmWEQVQNS7%2FR7kKv8DCBQQABoMNjM3NDIzMTgzODA1IgzLUk431G1UGMCbTC0q3AO6RZEBys%2BEVaTbyMEvbGPE8FuwgVVTKN102e1g%2BMKKf%2BDZwe8KDCTu3%2B3uQQAEnAgoLGmsqAabFU%2BPj1nmjv4ydf1BOxPbWnEeGTQznacu3skUyh7bKH1SfsJMCK23pgfmJruilC0aqw6I%2B0FSDNbMUlQ%2BaAMeZAXCTfxw3ulXhXJHXjWRX02dQbSgMlp0ZO2MdQ96sneuZC14gs6iPjkztGWmOa4FAGztI8CrH5zhQ3aTo1IBigiwpEAZPfpiROmo2b69kYpaBZVXOI9YvXh2Yazs2T6otDbgiiABhI%2FUoMqUAo2uHKpS1LeAhg%2FX3fudKYMtYyOvSMFpFki4AtvOATFBEjZ83f3gAQzbdG7rGqENJ5j8aOusYAOlsv9q1Uq3%2B8cw5uOHfXoKmABVkKgHiCSU1MgkWD1cxWHi96KBCMg3NEI%2FTP%2Fc45MFHX8A53FVCqPSLsPBAWNPQwkkltLOjswm6ZXP7mePypHHAyG5HK93njdGbnR7xUQ1R3v66Hf7U%2BuKnfMFfDfmjueNpkqzUAZ%2Bqr%2BH6U1IxQcvTem5hfZrGejHgTUqDXeMgDY7aMNztTBJKAuX6Fx%2F%2F3QX2BTk6B8J1KVbKvO1F6YckFJSZp3YK5RkoKTa73%2BWsTDr5obQBjqkAaIDdrHSE0b%2F5pgDPZafYHNmPL6xUUAFqeVmUQ1AK36LvJZW%2BvQEE4zCf19wa2AXJ9XON4z8E9IZ%2BjV7A5BbaKjrq%2B6iZdgWs9%2F9M9apfYLGcsd1RDptNSNXzRlTkHTSTcK3S8q4GwAb%2Bd6%2B6UihOpqw8oxtXTLrsXdAY3jSHOIXt2oWc3g93eSvjwc5VHZOHw3I%2BgL8V%2ByzWqGIo5h9jotxrJKr&X-Amz-Signature=480cff536070dd3ba14971dc7d6e0681b3b90137110ce807935cb0f9c6b7840e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662BL6FLBJ%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQD0w6ZObBzr4SvzFGziCZ3aTJ8bosr0fMWbPOQykcckewIhAKCbAFTkjoVmR3HvDfdoht%2By%2F3y1To7E%2FG9cnasWGIugKv8DCBQQABoMNjM3NDIzMTgzODA1IgygffL7KPQPSdbtLJoq3AMGm8HijN29ymusbaNBtjk3SOifEu59Zbu2jV4oMH8WL%2Be%2FHDpLlcfh69kUFSKVKhL%2FqpmtGE9gMhWgm02eHhd9eCXV3L3BDvhqq31wdKkUFnZJ82Oamkn0qtZLoj7VnLPV8B5nhWILM9QK1wPfbmxKVjQszByfZSyv1DkjoT7bKVRd3t6SEne%2BQgkOqIpgg3XxPr3oOBtwysRcJwYKpI%2FSzjKwnP0330CSQwSN5vmY89W7g1w29RFF15yd0PJ3nydZk0jo1K8t%2FpVADCD9tZj37B7atpsHf%2Fk0vFfaPHDWqe%2BK8rAeHh%2BI2EAs37hlIR9BTGd5rnORj%2BEgweLf6vK4%2BWTYwuw%2Bi1%2Fl26G7zfA7BP%2BOhpOFsslopfEhlfs3WZ87OyLBD9vQC5PmXASJW3ltH7kNTSH274XTzttF8oc%2F2vUXFjOs9fQdiWPbHNS6Dd7asaFebU4XHPqzlH%2BfGIX1AG%2Bt%2Bla8NYEdV%2BbrbKBhdpSAtOu6BSKYQQwEkSN0X54dHIN5lYJhEgWJdbxboqO9Tzy9vbctd1pbJKohajWGrnfJdW639N67c1%2FMiTOGvgL1Ryux8jfEKMgubn%2FN%2BHUZp2WAN1Efm2p%2B%2FkyKsDZCIHQT5w1bUe00a7Zr6DCO5YbQBjqkAbj5ZSA2METzCY66%2FTdbKiRfCYi5ss%2BtNFR4FVy%2BjnB%2FNzz%2BNptXDBpsJ5E8VwNW6WhAcNOWbd3agMMWO2PKGJW0z%2FLLFiPIbalDw6T000RjdWsOL5pOiJkOM4nje842afRXD4P7R4IVSkz36Vm2He9IEFik3pEazDrYQVsRl8s095UStXqVMnhpKb4C1KWg0BIRc5m61RcS6RZ%2F1z4zVd2RGEmv&X-Amz-Signature=27dc4d84be16e2d19e1fb524904a259b36cdf8ad3dab5eef4a04c2824fee3cf1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662BL6FLBJ%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQD0w6ZObBzr4SvzFGziCZ3aTJ8bosr0fMWbPOQykcckewIhAKCbAFTkjoVmR3HvDfdoht%2By%2F3y1To7E%2FG9cnasWGIugKv8DCBQQABoMNjM3NDIzMTgzODA1IgygffL7KPQPSdbtLJoq3AMGm8HijN29ymusbaNBtjk3SOifEu59Zbu2jV4oMH8WL%2Be%2FHDpLlcfh69kUFSKVKhL%2FqpmtGE9gMhWgm02eHhd9eCXV3L3BDvhqq31wdKkUFnZJ82Oamkn0qtZLoj7VnLPV8B5nhWILM9QK1wPfbmxKVjQszByfZSyv1DkjoT7bKVRd3t6SEne%2BQgkOqIpgg3XxPr3oOBtwysRcJwYKpI%2FSzjKwnP0330CSQwSN5vmY89W7g1w29RFF15yd0PJ3nydZk0jo1K8t%2FpVADCD9tZj37B7atpsHf%2Fk0vFfaPHDWqe%2BK8rAeHh%2BI2EAs37hlIR9BTGd5rnORj%2BEgweLf6vK4%2BWTYwuw%2Bi1%2Fl26G7zfA7BP%2BOhpOFsslopfEhlfs3WZ87OyLBD9vQC5PmXASJW3ltH7kNTSH274XTzttF8oc%2F2vUXFjOs9fQdiWPbHNS6Dd7asaFebU4XHPqzlH%2BfGIX1AG%2Bt%2Bla8NYEdV%2BbrbKBhdpSAtOu6BSKYQQwEkSN0X54dHIN5lYJhEgWJdbxboqO9Tzy9vbctd1pbJKohajWGrnfJdW639N67c1%2FMiTOGvgL1Ryux8jfEKMgubn%2FN%2BHUZp2WAN1Efm2p%2B%2FkyKsDZCIHQT5w1bUe00a7Zr6DCO5YbQBjqkAbj5ZSA2METzCY66%2FTdbKiRfCYi5ss%2BtNFR4FVy%2BjnB%2FNzz%2BNptXDBpsJ5E8VwNW6WhAcNOWbd3agMMWO2PKGJW0z%2FLLFiPIbalDw6T000RjdWsOL5pOiJkOM4nje842afRXD4P7R4IVSkz36Vm2He9IEFik3pEazDrYQVsRl8s095UStXqVMnhpKb4C1KWg0BIRc5m61RcS6RZ%2F1z4zVd2RGEmv&X-Amz-Signature=a905a8f6d23e444741df4ee1e889209039f285ded37ac5b89c9b374e5cc7b8f7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662BL6FLBJ%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQD0w6ZObBzr4SvzFGziCZ3aTJ8bosr0fMWbPOQykcckewIhAKCbAFTkjoVmR3HvDfdoht%2By%2F3y1To7E%2FG9cnasWGIugKv8DCBQQABoMNjM3NDIzMTgzODA1IgygffL7KPQPSdbtLJoq3AMGm8HijN29ymusbaNBtjk3SOifEu59Zbu2jV4oMH8WL%2Be%2FHDpLlcfh69kUFSKVKhL%2FqpmtGE9gMhWgm02eHhd9eCXV3L3BDvhqq31wdKkUFnZJ82Oamkn0qtZLoj7VnLPV8B5nhWILM9QK1wPfbmxKVjQszByfZSyv1DkjoT7bKVRd3t6SEne%2BQgkOqIpgg3XxPr3oOBtwysRcJwYKpI%2FSzjKwnP0330CSQwSN5vmY89W7g1w29RFF15yd0PJ3nydZk0jo1K8t%2FpVADCD9tZj37B7atpsHf%2Fk0vFfaPHDWqe%2BK8rAeHh%2BI2EAs37hlIR9BTGd5rnORj%2BEgweLf6vK4%2BWTYwuw%2Bi1%2Fl26G7zfA7BP%2BOhpOFsslopfEhlfs3WZ87OyLBD9vQC5PmXASJW3ltH7kNTSH274XTzttF8oc%2F2vUXFjOs9fQdiWPbHNS6Dd7asaFebU4XHPqzlH%2BfGIX1AG%2Bt%2Bla8NYEdV%2BbrbKBhdpSAtOu6BSKYQQwEkSN0X54dHIN5lYJhEgWJdbxboqO9Tzy9vbctd1pbJKohajWGrnfJdW639N67c1%2FMiTOGvgL1Ryux8jfEKMgubn%2FN%2BHUZp2WAN1Efm2p%2B%2FkyKsDZCIHQT5w1bUe00a7Zr6DCO5YbQBjqkAbj5ZSA2METzCY66%2FTdbKiRfCYi5ss%2BtNFR4FVy%2BjnB%2FNzz%2BNptXDBpsJ5E8VwNW6WhAcNOWbd3agMMWO2PKGJW0z%2FLLFiPIbalDw6T000RjdWsOL5pOiJkOM4nje842afRXD4P7R4IVSkz36Vm2He9IEFik3pEazDrYQVsRl8s095UStXqVMnhpKb4C1KWg0BIRc5m61RcS6RZ%2F1z4zVd2RGEmv&X-Amz-Signature=5ecb193c9cf7be611d33d860959db5d1f42b20baf93d744e9d21e7e3c4a728be&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662BL6FLBJ%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQD0w6ZObBzr4SvzFGziCZ3aTJ8bosr0fMWbPOQykcckewIhAKCbAFTkjoVmR3HvDfdoht%2By%2F3y1To7E%2FG9cnasWGIugKv8DCBQQABoMNjM3NDIzMTgzODA1IgygffL7KPQPSdbtLJoq3AMGm8HijN29ymusbaNBtjk3SOifEu59Zbu2jV4oMH8WL%2Be%2FHDpLlcfh69kUFSKVKhL%2FqpmtGE9gMhWgm02eHhd9eCXV3L3BDvhqq31wdKkUFnZJ82Oamkn0qtZLoj7VnLPV8B5nhWILM9QK1wPfbmxKVjQszByfZSyv1DkjoT7bKVRd3t6SEne%2BQgkOqIpgg3XxPr3oOBtwysRcJwYKpI%2FSzjKwnP0330CSQwSN5vmY89W7g1w29RFF15yd0PJ3nydZk0jo1K8t%2FpVADCD9tZj37B7atpsHf%2Fk0vFfaPHDWqe%2BK8rAeHh%2BI2EAs37hlIR9BTGd5rnORj%2BEgweLf6vK4%2BWTYwuw%2Bi1%2Fl26G7zfA7BP%2BOhpOFsslopfEhlfs3WZ87OyLBD9vQC5PmXASJW3ltH7kNTSH274XTzttF8oc%2F2vUXFjOs9fQdiWPbHNS6Dd7asaFebU4XHPqzlH%2BfGIX1AG%2Bt%2Bla8NYEdV%2BbrbKBhdpSAtOu6BSKYQQwEkSN0X54dHIN5lYJhEgWJdbxboqO9Tzy9vbctd1pbJKohajWGrnfJdW639N67c1%2FMiTOGvgL1Ryux8jfEKMgubn%2FN%2BHUZp2WAN1Efm2p%2B%2FkyKsDZCIHQT5w1bUe00a7Zr6DCO5YbQBjqkAbj5ZSA2METzCY66%2FTdbKiRfCYi5ss%2BtNFR4FVy%2BjnB%2FNzz%2BNptXDBpsJ5E8VwNW6WhAcNOWbd3agMMWO2PKGJW0z%2FLLFiPIbalDw6T000RjdWsOL5pOiJkOM4nje842afRXD4P7R4IVSkz36Vm2He9IEFik3pEazDrYQVsRl8s095UStXqVMnhpKb4C1KWg0BIRc5m61RcS6RZ%2F1z4zVd2RGEmv&X-Amz-Signature=73c6a74273faf6122c1da5a32923e0a1bca332b6f8c81321561af1b2df6c289c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V2SSAWPR%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJGMEQCIF4SRuvpv3IgHaV6iQEtlRY%2F3Slxp1ngJBwfvcysHWd5AiAM6mS96gG1J0%2BaxmUnJ3osNEDzy7hwoMklYOOK7xP2oir%2FAwgUEAAaDDYzNzQyMzE4MzgwNSIMt5Tm3zVnCJZXQX9uKtwD2K%2FUICAkJrRsPgbMWjO34XAtu7FRoMLlwG5jCa5ZWTeRUXr1fLmoihfAwdZqg6lXhrw3lhNhjC04joPT92K9ONZ8sUOYV5W4sR7vSjUjOXffRKpZzSh%2B6qKZI%2Bjw1WYHSugPg8gty1dFrUjZSYl5arl112vRxLU%2FaUrSeEnpQJgDtVDzCOe73iYKXHvray9148VciyCxbYHqaAGk%2BGXQNEIHEjsNUddki2vJV3agnqporewAEX%2B01Dai5pBVq4zuEAAWcOoRlbgBZQz6JgGB%2FGR%2B28ls4p7vlGhPtmr0IdF7fnhSUJu94TjxWh%2BspOqszqDRomTjaaox1uJn6DC5AmWPWazC6ALTGkMUuku4ZSMGqHQkNCxAksfZiSeaOTThiwzQaPmZ1XxLkUQimj%2B6wFV%2BaOjay9pNZ8oUMCRMMpDN1QUH7jYgQH%2FUb6kjz5ZmGULP3lxICAPxGNqa6%2BeyopMgOsLuzHinUbOKEfXGuXcCqjG2Ba2n%2BZfMyd26DMyj0xMm12mqzs%2BYPaAuPzMkjfgdFzhoIsN4Ga3tFZII8MRWlRkx0n3CsTq07ToEKTf%2FqJON7QzGGIxuKhzNZ6pFq662LtaCDyG2bFJv2JM6ETRc%2BvlydMTDF8F8ow0wtOaG0AY6pgFR6pPr1DOd2QD9Hx1b9aXT2FwrASuNoj%2B0BVnafeqPk5fgJvLbY2Ub7DpB3KvJaTuvH2PbtvueAtYYFin%2BEQiqFlh3MNPtpBUFdidFVH7Td1FnIk9IcGhBkW%2B1qQTRGWlnkbO7%2F%2BknFgT1DdIu6GviiX6Dv7BiUbGG8q7k5ctJq6DE7mjxYfMNP3cFPhZ8pk1Vtb4osUAdjQSEfD4YJ6D29fvs0CqO&X-Amz-Signature=08d56a55faa0ad66c581d9a50032248bd83e4b25f731ac36b02bbb8f617cdd35&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662LV4MP3C%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQCNWrNIX6rOnBDH%2FWEqiqw4IZnP8dALLpe9BdPzdCy0YgIhAM5D%2FOCtJS8Flx%2BX5YQYit6c7fCJAhucr%2B5E%2B%2FsCyl8MKv8DCBQQABoMNjM3NDIzMTgzODA1Igzakq8Uye%2FFjrTo%2FFkq3APRD0kMX1MQ%2BlP6PPO6wYgzk7W0OldvkTgLb2eqdx0fVKbPyZ40DjvQHwiczyR4OcJyQddNtfkPgG6aj3TeqRmtLhYZiwJ2HwLpbY9GgB4DLjtYkujlXLxzjdiszmMMFjRg8KpgGKJuN5g7LFQlLdQJ1TQbtaq6Wk9rjzIBo5%2Fyx%2FGn6DUXJHjA067Unb%2BADvorvhu2yE7OpI80RuH2ISrFve97oafjkP1gBpWN713oVbYQkPlA%2BylfEv1yYNUTh6y6p5GkixX%2BFW5bgbcRTXUnFg%2F1BYx%2BKz47HbJqJrzNZSXJmwW9P62uCWCFv7cPeCFvpxexKbLrxtt2H2e7BY7EvUEoJDDOJmv5wlcjpArQB%2FSjoeohiInUAFRpvprqYcrqZlYZDIfo24aYXjEyK%2Fjh%2BMk%2FCny6GcZurEl5I0znV5pzMKMU92wN8WQL3NaQ6PT78Xk5%2F4BLac5G3MVuuR0niYjOLtoVy2SG5Rdylvc7j2zCBOxWjhDmMNykcBVtfd7YaZIoSjviQ3R76LVDzJqO%2FlPC1a4ftKIQiUCCqJ5ue9d1xmgCbngDbWTpejWTxYbdyaUJ15TN8tT8NMYTgg4nE53uKsTQh%2FNpZXbldGKFj8RwbL%2BYwX5Yml3QEDCg5YbQBjqkAbVgp7Jvpl2Ye6dEaO%2Fs8%2BZZ9gXxO%2Fk1lMZJ%2FqNz4xx8%2BYvaXTAnhifvn3LuTHIBts5jHbFvxyb2IzLghKa4U95sTHPGC%2Fvoc8gx0VGBBwbM6qcMnODJphVNfZwrXK7Kfr8GohK9pjFVbddNu6m0v%2FgdtfC8bxN6Y%2ByBotPWrmnYsSHgRGhdBAuHC3Y00Nq7X%2B6UDAHW5HhJD3hAjMB1hLPSOzCR&X-Amz-Signature=4ca102a4b1861f6be17a05ab5de68e599e048698c65c29cd691a548a72a563e7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662LV4MP3C%2F20260511%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260511T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEsaCXVzLXdlc3QtMiJIMEYCIQCNWrNIX6rOnBDH%2FWEqiqw4IZnP8dALLpe9BdPzdCy0YgIhAM5D%2FOCtJS8Flx%2BX5YQYit6c7fCJAhucr%2B5E%2B%2FsCyl8MKv8DCBQQABoMNjM3NDIzMTgzODA1Igzakq8Uye%2FFjrTo%2FFkq3APRD0kMX1MQ%2BlP6PPO6wYgzk7W0OldvkTgLb2eqdx0fVKbPyZ40DjvQHwiczyR4OcJyQddNtfkPgG6aj3TeqRmtLhYZiwJ2HwLpbY9GgB4DLjtYkujlXLxzjdiszmMMFjRg8KpgGKJuN5g7LFQlLdQJ1TQbtaq6Wk9rjzIBo5%2Fyx%2FGn6DUXJHjA067Unb%2BADvorvhu2yE7OpI80RuH2ISrFve97oafjkP1gBpWN713oVbYQkPlA%2BylfEv1yYNUTh6y6p5GkixX%2BFW5bgbcRTXUnFg%2F1BYx%2BKz47HbJqJrzNZSXJmwW9P62uCWCFv7cPeCFvpxexKbLrxtt2H2e7BY7EvUEoJDDOJmv5wlcjpArQB%2FSjoeohiInUAFRpvprqYcrqZlYZDIfo24aYXjEyK%2Fjh%2BMk%2FCny6GcZurEl5I0znV5pzMKMU92wN8WQL3NaQ6PT78Xk5%2F4BLac5G3MVuuR0niYjOLtoVy2SG5Rdylvc7j2zCBOxWjhDmMNykcBVtfd7YaZIoSjviQ3R76LVDzJqO%2FlPC1a4ftKIQiUCCqJ5ue9d1xmgCbngDbWTpejWTxYbdyaUJ15TN8tT8NMYTgg4nE53uKsTQh%2FNpZXbldGKFj8RwbL%2BYwX5Yml3QEDCg5YbQBjqkAbVgp7Jvpl2Ye6dEaO%2Fs8%2BZZ9gXxO%2Fk1lMZJ%2FqNz4xx8%2BYvaXTAnhifvn3LuTHIBts5jHbFvxyb2IzLghKa4U95sTHPGC%2Fvoc8gx0VGBBwbM6qcMnODJphVNfZwrXK7Kfr8GohK9pjFVbddNu6m0v%2FgdtfC8bxN6Y%2ByBotPWrmnYsSHgRGhdBAuHC3Y00Nq7X%2B6UDAHW5HhJD3hAjMB1hLPSOzCR&X-Amz-Signature=68febc500699b8d0482e9993f2ad8aaf6dc654ba84306193ad7e5549f62bff37&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
