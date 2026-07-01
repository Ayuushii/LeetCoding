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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJTX6QQ3%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCIDWpmhvLUqZND%2FF4leSLvXuCCRPsqkN6fAzIcrxjgKMTAiAl3VTFpQWxOWuwoo1tmWVeDjEe94h%2FyjhjKc3r99dnJiqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMkj3uPq8STUgZJwf4KtwDLXPeh4oN93b1V23SPLj%2FDZUMKO4Zs1ZHnvHPxI98beBm1tTS4SSUkKrhB3V%2BQ%2FPJxGAogqPhqLikcwVsv6pFkkM4xB8PYWuEmAnjFunD9vB7IqPiZO5xI%2FR8z%2BfEWOTO3GPiaMUOfG8VbbZhs0dr0ykZo6LmChpd%2FLoJG04WfkCL0ulxkxe%2BcIA1KSx5VWlKE9OTAgDa%2F0L8SjA0wN8jOucPqyEU8L%2FzGp3eVpJ1AUOw%2B1uhRJCi7jypoU4x3CFXB6IL2VDpDAtBrFv0HbxJAE5ZP5bnM5UkNgV%2F5lH0%2BqYTc6JA3YWFRQtuVhjCn2VmL3bfrEq83Suv5lXqUt8l1ieN37B250%2FmpFR%2B6vUULs5AB1nePLLxzXINALRHgy8Un9GOuyGVlPjtJWOko%2F3vMHrKOtBe4UDVMZVGdOhwCgXuuf8zgmbQYL5R8XI%2FB4veNogTDYivo5MkJ%2FprDS%2B80RL%2FR0VPDqINGn6x2dfg33zU6w55HunfywZ%2F3hJil1mxLcHschku0xj6lXa3WzVlUtey2radHr6WjGsne%2FO%2FyW8PCUonEHGe%2F0T1y0x7NhtD3Ordj3H77MoxKZzOSP%2FqoHAILfZztpL8PkADIiOLgXV%2FBzQBStZ2ggGL9DowpqmT0gY6pgFwXth%2Bot%2BmxLsREyeDIueX%2BmwSzQNeJki4cMeT9Pdo7mifkxwmRlz3r6OTMRB%2BBEJYRSuIYe2jkqUyGWjlTcQFRSN75s04INgSODQI1jcvVgAP%2Bg%2BjSzwNwBtd5Ct%2Fyrs8k8sKVzvhP6tX5oGMttcdPCDMmXOTP0j%2BqSvxQhxUP0D13wDcXR0m42DkObJ%2FB%2Fw8PHNKtR0UlX4IWAumupssH%2BOgoTFs&X-Amz-Signature=8b3ef397cef6b7d2b66fc43f08929b21b08c445cc4826746e998990cb6e7f00d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJTX6QQ3%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCIDWpmhvLUqZND%2FF4leSLvXuCCRPsqkN6fAzIcrxjgKMTAiAl3VTFpQWxOWuwoo1tmWVeDjEe94h%2FyjhjKc3r99dnJiqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMkj3uPq8STUgZJwf4KtwDLXPeh4oN93b1V23SPLj%2FDZUMKO4Zs1ZHnvHPxI98beBm1tTS4SSUkKrhB3V%2BQ%2FPJxGAogqPhqLikcwVsv6pFkkM4xB8PYWuEmAnjFunD9vB7IqPiZO5xI%2FR8z%2BfEWOTO3GPiaMUOfG8VbbZhs0dr0ykZo6LmChpd%2FLoJG04WfkCL0ulxkxe%2BcIA1KSx5VWlKE9OTAgDa%2F0L8SjA0wN8jOucPqyEU8L%2FzGp3eVpJ1AUOw%2B1uhRJCi7jypoU4x3CFXB6IL2VDpDAtBrFv0HbxJAE5ZP5bnM5UkNgV%2F5lH0%2BqYTc6JA3YWFRQtuVhjCn2VmL3bfrEq83Suv5lXqUt8l1ieN37B250%2FmpFR%2B6vUULs5AB1nePLLxzXINALRHgy8Un9GOuyGVlPjtJWOko%2F3vMHrKOtBe4UDVMZVGdOhwCgXuuf8zgmbQYL5R8XI%2FB4veNogTDYivo5MkJ%2FprDS%2B80RL%2FR0VPDqINGn6x2dfg33zU6w55HunfywZ%2F3hJil1mxLcHschku0xj6lXa3WzVlUtey2radHr6WjGsne%2FO%2FyW8PCUonEHGe%2F0T1y0x7NhtD3Ordj3H77MoxKZzOSP%2FqoHAILfZztpL8PkADIiOLgXV%2FBzQBStZ2ggGL9DowpqmT0gY6pgFwXth%2Bot%2BmxLsREyeDIueX%2BmwSzQNeJki4cMeT9Pdo7mifkxwmRlz3r6OTMRB%2BBEJYRSuIYe2jkqUyGWjlTcQFRSN75s04INgSODQI1jcvVgAP%2Bg%2BjSzwNwBtd5Ct%2Fyrs8k8sKVzvhP6tX5oGMttcdPCDMmXOTP0j%2BqSvxQhxUP0D13wDcXR0m42DkObJ%2FB%2Fw8PHNKtR0UlX4IWAumupssH%2BOgoTFs&X-Amz-Signature=112125c04a7b484e2e6f5ded47261a095a00b9c83595103cf31512e16e5819fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJTX6QQ3%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCIDWpmhvLUqZND%2FF4leSLvXuCCRPsqkN6fAzIcrxjgKMTAiAl3VTFpQWxOWuwoo1tmWVeDjEe94h%2FyjhjKc3r99dnJiqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMkj3uPq8STUgZJwf4KtwDLXPeh4oN93b1V23SPLj%2FDZUMKO4Zs1ZHnvHPxI98beBm1tTS4SSUkKrhB3V%2BQ%2FPJxGAogqPhqLikcwVsv6pFkkM4xB8PYWuEmAnjFunD9vB7IqPiZO5xI%2FR8z%2BfEWOTO3GPiaMUOfG8VbbZhs0dr0ykZo6LmChpd%2FLoJG04WfkCL0ulxkxe%2BcIA1KSx5VWlKE9OTAgDa%2F0L8SjA0wN8jOucPqyEU8L%2FzGp3eVpJ1AUOw%2B1uhRJCi7jypoU4x3CFXB6IL2VDpDAtBrFv0HbxJAE5ZP5bnM5UkNgV%2F5lH0%2BqYTc6JA3YWFRQtuVhjCn2VmL3bfrEq83Suv5lXqUt8l1ieN37B250%2FmpFR%2B6vUULs5AB1nePLLxzXINALRHgy8Un9GOuyGVlPjtJWOko%2F3vMHrKOtBe4UDVMZVGdOhwCgXuuf8zgmbQYL5R8XI%2FB4veNogTDYivo5MkJ%2FprDS%2B80RL%2FR0VPDqINGn6x2dfg33zU6w55HunfywZ%2F3hJil1mxLcHschku0xj6lXa3WzVlUtey2radHr6WjGsne%2FO%2FyW8PCUonEHGe%2F0T1y0x7NhtD3Ordj3H77MoxKZzOSP%2FqoHAILfZztpL8PkADIiOLgXV%2FBzQBStZ2ggGL9DowpqmT0gY6pgFwXth%2Bot%2BmxLsREyeDIueX%2BmwSzQNeJki4cMeT9Pdo7mifkxwmRlz3r6OTMRB%2BBEJYRSuIYe2jkqUyGWjlTcQFRSN75s04INgSODQI1jcvVgAP%2Bg%2BjSzwNwBtd5Ct%2Fyrs8k8sKVzvhP6tX5oGMttcdPCDMmXOTP0j%2BqSvxQhxUP0D13wDcXR0m42DkObJ%2FB%2Fw8PHNKtR0UlX4IWAumupssH%2BOgoTFs&X-Amz-Signature=844be7f8a639af2944afa7ea519d224466efb3a7996993b3c3ca9124b59689ba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKMJHBWT%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICsGpgoDqfy3NlbRJeR2RGo5ggySJ7%2FswD6q2Np9jdsmAiBGbdHWEPlYaRU09n7QWxOlab2AnonuT0bOEf2v0X1HsSqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMFDRFptb6RFVpS6eQKtwD%2FUHPM%2BxJAShHgoZczyqdazq00nOFzN%2FIf1D3XvrU406m4fcYWcAln7f%2BMhMcfiG7bg4%2B5GdH%2FpXTaltgN71XfPsMfreCtMhe0iaYvB%2Bd%2FaXt2SrjKyxWycGdWRShizguKOZjLdmLuQ7rxnXllg%2FVtf8KzH6GndJ4ytP1AIs0MSy4eQMkr6JNwsF2p%2FAdJewiW3CpftYfdX45i37Mygeh1l7cxIQpEmuWiSQ8w1F%2FdGajm0KveJ%2FWxkaiV1FUfGcCpl6gUHAob8I5jh6JNawftAis1i5K2KDTraBY%2BJnPQ0akD0StROYw20Z6Z4lCMaN9pJpILAB4sa0qtFxCw8azTb8JwbLbM211IivL16R6mjNKPaEOpZA7zD7QQ7TwulFuohtvFutSTsrUhZxapym30Kcrn%2B1dPBr8k1nSbnF7QmCUgG8DJ8oHBU2YovSqYIYlkFi8wYGJn9bEDByGpGYAuehMZKAsasMe4%2FA5MEkEGfK8i6cx29ezMIW4e%2F80HfuTnCz%2BU35H6ubZ15QzKodk3b0vbGGwF2Zm3gUulG3mJnlXjcLN0DoJzVeviB4Q8%2BQd0tAAr3JOTux64%2FDMpH5aT4HQzH7FC6i78246qouA6T3lLY%2BSt8GNKV7v%2FIUwiKGT0gY6pgEnPJqvdykgKEaiOcoyj59MxvFwB7UMf4GYkG5kUAc6dwS9ioWFZ4Qw%2B2RsXNBSCgperBVEjTVKiZLPlOSf9F09OHE2iL4jbxxYHrNHMti7HiiuQFAjZUFd%2BhNex57HeiUQcdlFRUM%2BWZQEHS5rVGn75f10daQUGmq6k%2FQMiBKoSZEx2rA0Xri2qR0cV6x6e%2F%2BVTeRwaxQB2F8slBQXDD1Ikb2a3yV0&X-Amz-Signature=be93a8c352dfaaae5540964d342847db79181f7f4660fce44f7c90c01bc529e7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKMJHBWT%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICsGpgoDqfy3NlbRJeR2RGo5ggySJ7%2FswD6q2Np9jdsmAiBGbdHWEPlYaRU09n7QWxOlab2AnonuT0bOEf2v0X1HsSqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMFDRFptb6RFVpS6eQKtwD%2FUHPM%2BxJAShHgoZczyqdazq00nOFzN%2FIf1D3XvrU406m4fcYWcAln7f%2BMhMcfiG7bg4%2B5GdH%2FpXTaltgN71XfPsMfreCtMhe0iaYvB%2Bd%2FaXt2SrjKyxWycGdWRShizguKOZjLdmLuQ7rxnXllg%2FVtf8KzH6GndJ4ytP1AIs0MSy4eQMkr6JNwsF2p%2FAdJewiW3CpftYfdX45i37Mygeh1l7cxIQpEmuWiSQ8w1F%2FdGajm0KveJ%2FWxkaiV1FUfGcCpl6gUHAob8I5jh6JNawftAis1i5K2KDTraBY%2BJnPQ0akD0StROYw20Z6Z4lCMaN9pJpILAB4sa0qtFxCw8azTb8JwbLbM211IivL16R6mjNKPaEOpZA7zD7QQ7TwulFuohtvFutSTsrUhZxapym30Kcrn%2B1dPBr8k1nSbnF7QmCUgG8DJ8oHBU2YovSqYIYlkFi8wYGJn9bEDByGpGYAuehMZKAsasMe4%2FA5MEkEGfK8i6cx29ezMIW4e%2F80HfuTnCz%2BU35H6ubZ15QzKodk3b0vbGGwF2Zm3gUulG3mJnlXjcLN0DoJzVeviB4Q8%2BQd0tAAr3JOTux64%2FDMpH5aT4HQzH7FC6i78246qouA6T3lLY%2BSt8GNKV7v%2FIUwiKGT0gY6pgEnPJqvdykgKEaiOcoyj59MxvFwB7UMf4GYkG5kUAc6dwS9ioWFZ4Qw%2B2RsXNBSCgperBVEjTVKiZLPlOSf9F09OHE2iL4jbxxYHrNHMti7HiiuQFAjZUFd%2BhNex57HeiUQcdlFRUM%2BWZQEHS5rVGn75f10daQUGmq6k%2FQMiBKoSZEx2rA0Xri2qR0cV6x6e%2F%2BVTeRwaxQB2F8slBQXDD1Ikb2a3yV0&X-Amz-Signature=694a32fd209b5b4ebfe36a756d04378706d9b6747f812d62096485adc912f24f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKMJHBWT%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICsGpgoDqfy3NlbRJeR2RGo5ggySJ7%2FswD6q2Np9jdsmAiBGbdHWEPlYaRU09n7QWxOlab2AnonuT0bOEf2v0X1HsSqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMFDRFptb6RFVpS6eQKtwD%2FUHPM%2BxJAShHgoZczyqdazq00nOFzN%2FIf1D3XvrU406m4fcYWcAln7f%2BMhMcfiG7bg4%2B5GdH%2FpXTaltgN71XfPsMfreCtMhe0iaYvB%2Bd%2FaXt2SrjKyxWycGdWRShizguKOZjLdmLuQ7rxnXllg%2FVtf8KzH6GndJ4ytP1AIs0MSy4eQMkr6JNwsF2p%2FAdJewiW3CpftYfdX45i37Mygeh1l7cxIQpEmuWiSQ8w1F%2FdGajm0KveJ%2FWxkaiV1FUfGcCpl6gUHAob8I5jh6JNawftAis1i5K2KDTraBY%2BJnPQ0akD0StROYw20Z6Z4lCMaN9pJpILAB4sa0qtFxCw8azTb8JwbLbM211IivL16R6mjNKPaEOpZA7zD7QQ7TwulFuohtvFutSTsrUhZxapym30Kcrn%2B1dPBr8k1nSbnF7QmCUgG8DJ8oHBU2YovSqYIYlkFi8wYGJn9bEDByGpGYAuehMZKAsasMe4%2FA5MEkEGfK8i6cx29ezMIW4e%2F80HfuTnCz%2BU35H6ubZ15QzKodk3b0vbGGwF2Zm3gUulG3mJnlXjcLN0DoJzVeviB4Q8%2BQd0tAAr3JOTux64%2FDMpH5aT4HQzH7FC6i78246qouA6T3lLY%2BSt8GNKV7v%2FIUwiKGT0gY6pgEnPJqvdykgKEaiOcoyj59MxvFwB7UMf4GYkG5kUAc6dwS9ioWFZ4Qw%2B2RsXNBSCgperBVEjTVKiZLPlOSf9F09OHE2iL4jbxxYHrNHMti7HiiuQFAjZUFd%2BhNex57HeiUQcdlFRUM%2BWZQEHS5rVGn75f10daQUGmq6k%2FQMiBKoSZEx2rA0Xri2qR0cV6x6e%2F%2BVTeRwaxQB2F8slBQXDD1Ikb2a3yV0&X-Amz-Signature=0e7670ebde9a31ce28269f5a91af695b21c4cf06a3f11e05269459b45206d7a0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKMJHBWT%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICsGpgoDqfy3NlbRJeR2RGo5ggySJ7%2FswD6q2Np9jdsmAiBGbdHWEPlYaRU09n7QWxOlab2AnonuT0bOEf2v0X1HsSqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMFDRFptb6RFVpS6eQKtwD%2FUHPM%2BxJAShHgoZczyqdazq00nOFzN%2FIf1D3XvrU406m4fcYWcAln7f%2BMhMcfiG7bg4%2B5GdH%2FpXTaltgN71XfPsMfreCtMhe0iaYvB%2Bd%2FaXt2SrjKyxWycGdWRShizguKOZjLdmLuQ7rxnXllg%2FVtf8KzH6GndJ4ytP1AIs0MSy4eQMkr6JNwsF2p%2FAdJewiW3CpftYfdX45i37Mygeh1l7cxIQpEmuWiSQ8w1F%2FdGajm0KveJ%2FWxkaiV1FUfGcCpl6gUHAob8I5jh6JNawftAis1i5K2KDTraBY%2BJnPQ0akD0StROYw20Z6Z4lCMaN9pJpILAB4sa0qtFxCw8azTb8JwbLbM211IivL16R6mjNKPaEOpZA7zD7QQ7TwulFuohtvFutSTsrUhZxapym30Kcrn%2B1dPBr8k1nSbnF7QmCUgG8DJ8oHBU2YovSqYIYlkFi8wYGJn9bEDByGpGYAuehMZKAsasMe4%2FA5MEkEGfK8i6cx29ezMIW4e%2F80HfuTnCz%2BU35H6ubZ15QzKodk3b0vbGGwF2Zm3gUulG3mJnlXjcLN0DoJzVeviB4Q8%2BQd0tAAr3JOTux64%2FDMpH5aT4HQzH7FC6i78246qouA6T3lLY%2BSt8GNKV7v%2FIUwiKGT0gY6pgEnPJqvdykgKEaiOcoyj59MxvFwB7UMf4GYkG5kUAc6dwS9ioWFZ4Qw%2B2RsXNBSCgperBVEjTVKiZLPlOSf9F09OHE2iL4jbxxYHrNHMti7HiiuQFAjZUFd%2BhNex57HeiUQcdlFRUM%2BWZQEHS5rVGn75f10daQUGmq6k%2FQMiBKoSZEx2rA0Xri2qR0cV6x6e%2F%2BVTeRwaxQB2F8slBQXDD1Ikb2a3yV0&X-Amz-Signature=f3d8b1969da957684e8a2a1cf77ef7ba459f23cc31d4239218aabd70ea4efcc9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667MVPEPD2%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112142Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBIaCXVzLXdlc3QtMiJHMEUCIQCLSJb2O7RYEXWigGrM3SVh01Fi3tMLLxuxU4YvG8U%2FbQIgOpSuwwAI1UseO593CihmHDbiFBjAptOvX4cVSbSB0cQqiAQI2%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEQtntcJR%2BD4JfWjKCrcA55mCb%2FnCM%2BZ%2F8Nn8VvpSwpUtOZmNHVs2fu244aQ9cDztY9%2BrR8GJe3sk0qwl%2FIQK%2FbMzKTmS7JuS%2BF8%2FItn6qQuOH2sQDi40dbyJOwiYcLebc%2B55PFvOVQpmmui6KOlhWTMOgGHIjSvJE%2BYhy1B%2Fl0zTqIOvKUwR%2FqENRB1UZuIWpIFs8152ASa%2BrHbt%2FJIpJiJ3xDIJzDN48iE2EON46s8OG1OHocV%2B5MxAtfQ4p4CqI%2FY5doUQNG6nacvIjaEGCDImBUuBARsWqBnaVHYiEljd4PjdFRFGorqiH0Ewpn5m9kXZgTXFzFC8Gvf04nx5U0iSGnebMJzftKvlEsar2H%2FYY8T04mc4aaLctZ2GTf46E3pZ%2B5KrtEkn1d5pw%2F301IqbADouM4b02vjezG2nTVXfXPymqIMKhRO%2FZtfmzdfkJ0xXEeGbqozdgOgnF6BptgRLv5GYts1v2CQi%2Bya3AJGHiV1NLYL%2BgJ2DnZAQNw%2FDXZHiVBgaaD0l%2BjHNs7te%2FIOPjXrAre2Fw9sacKISWumh0waIqbEL95%2FzOODKxZBDKvzG43gmjtlFumg%2F02NLnH4Lm2kfc1pA9FmKjXS9Ll8aCWmBO34gdeKa0rC0B1Sn7WHv%2Fn73QjWZIh3MKO%2Bk9IGOqUBfU8hCqVBFw8XlWQJJPFBSFfWiXotDkoOiZrO%2BG1EJk8xhm%2BSWokUchp3A4qaLaxk2DrNVV7OHAMCyS6JpcOIwd2jPhiHNYIdefNoBvMWwKXU39HHJ3OwPqVGjAGqJ4QC1lsE%2FH4JgR4%2FncWuF8jpM2hozDAJDmn5gVqHv76jk1tmxy76JL1tMrrVsEwutNZSiba2%2F4ZY1EHQdbe5xjKqaUaosrgV&X-Amz-Signature=8f9b52bb521a85924ea3d3989e14202e960c2ce628454c7956fbc596f6e563c5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662H62STF5%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112142Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICFIdxBUOpKj0OvMiOYd29Ihel4eYK192BYXnAOt5%2FqdAiAdb2dgQYW4XuCgQWSmK%2B0AuBbu6jwdszF3sGYaEgAW4yqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMUfqc6mPRkV0PLnbkKtwDgKzuoWhV46Ho%2FwncYXQsV4XcQe8d%2BFWNoLXDFQJ%2F9cp%2B%2BForoOTHfHXqr1eZuNS4fF3LjmaQ%2BH57SJGOECZz0hbDJIXzItgFS31BZxrMVBgQvCVb4RYBHMQ50oMcwU0Em2QSs6%2BRJ3jV%2F3QeWcwuGFInwHZiIX71AQ3xKGFn9tzOWze4VTplehwbe6T3ui%2BCpicj%2FG%2BT3T3KCteZwocaPsY9ZT2cJAjZdO3cpW%2BA%2BM3HOzzAWEDkrr71xz9%2F%2F6TGeaVYbmM7fWU4BQ3THJqltejfYSkBvsr%2FqkXWq%2FEYZNYWszlB982HPvFbdhRcJgAviYcDTjY9rPU4kBBqDuqxh239iY6WXaKRiFRYA83OV%2FLOBL57%2Fgdr50mpv0KSR9hLeDfRX2Px5NWiogLHJirkyS7BHi1ya7iBSD8I5gA4%2FcXF1wbNYHobQoXoo8Z95NRUGKy2ttzAD2g8HtHu8%2B0SILxe3vy7tHpLT9XZzbIzXdg80uYaAz7%2BpkrKezgsfePN1CAqPoPNu1rrg0yO0F%2FgtRaVymzF7te%2BreU0EH%2FW7e3Ul5nts5zPdIjmWnRqH30HeUInmhvf%2FEVoN56ZreMv5DZOh8kQPSJT9DLRMGdaiMlS7VdT9%2FpKpkdUrggwq6yT0gY6pgGLCosNOeRhKaL5Bpkc4RHSRKFshJ2m0KOwQOTvnhlo%2Fb%2F%2FKaawjnBuxrVYZ5faSIITIbKManm9uPpQigd4zVM9vLo%2BziTMXYTRk%2BCf0Llb%2FSL5dYFh11yl%2BMbyK7ajO0FzWwsfBs94nsYDzOjEtmTKyxtsAmEcLo%2BVjvYIxP93m8ijI%2BvaQTkOeQDEcq0KorfRQR1jvvCJuGIFZP2%2B2l3Iwxc6vwAh&X-Amz-Signature=42fe80340b1141d1a2cedebbc12499594181422f5a6f5049f036c663ecfee968&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662H62STF5%2F20260701%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260701T112142Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCICFIdxBUOpKj0OvMiOYd29Ihel4eYK192BYXnAOt5%2FqdAiAdb2dgQYW4XuCgQWSmK%2B0AuBbu6jwdszF3sGYaEgAW4yqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMUfqc6mPRkV0PLnbkKtwDgKzuoWhV46Ho%2FwncYXQsV4XcQe8d%2BFWNoLXDFQJ%2F9cp%2B%2BForoOTHfHXqr1eZuNS4fF3LjmaQ%2BH57SJGOECZz0hbDJIXzItgFS31BZxrMVBgQvCVb4RYBHMQ50oMcwU0Em2QSs6%2BRJ3jV%2F3QeWcwuGFInwHZiIX71AQ3xKGFn9tzOWze4VTplehwbe6T3ui%2BCpicj%2FG%2BT3T3KCteZwocaPsY9ZT2cJAjZdO3cpW%2BA%2BM3HOzzAWEDkrr71xz9%2F%2F6TGeaVYbmM7fWU4BQ3THJqltejfYSkBvsr%2FqkXWq%2FEYZNYWszlB982HPvFbdhRcJgAviYcDTjY9rPU4kBBqDuqxh239iY6WXaKRiFRYA83OV%2FLOBL57%2Fgdr50mpv0KSR9hLeDfRX2Px5NWiogLHJirkyS7BHi1ya7iBSD8I5gA4%2FcXF1wbNYHobQoXoo8Z95NRUGKy2ttzAD2g8HtHu8%2B0SILxe3vy7tHpLT9XZzbIzXdg80uYaAz7%2BpkrKezgsfePN1CAqPoPNu1rrg0yO0F%2FgtRaVymzF7te%2BreU0EH%2FW7e3Ul5nts5zPdIjmWnRqH30HeUInmhvf%2FEVoN56ZreMv5DZOh8kQPSJT9DLRMGdaiMlS7VdT9%2FpKpkdUrggwq6yT0gY6pgGLCosNOeRhKaL5Bpkc4RHSRKFshJ2m0KOwQOTvnhlo%2Fb%2F%2FKaawjnBuxrVYZ5faSIITIbKManm9uPpQigd4zVM9vLo%2BziTMXYTRk%2BCf0Llb%2FSL5dYFh11yl%2BMbyK7ajO0FzWwsfBs94nsYDzOjEtmTKyxtsAmEcLo%2BVjvYIxP93m8ijI%2BvaQTkOeQDEcq0KorfRQR1jvvCJuGIFZP2%2B2l3Iwxc6vwAh&X-Amz-Signature=e00aa3b57af29e0de620fc4b6249330f4a5d03d08ec0cc2efb2599146f768815&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
