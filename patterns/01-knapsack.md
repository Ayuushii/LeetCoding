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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466643GWWNS%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDNmBSYWgv2UhxzaEzexhlwn9zv4Red7pkgrL%2BdPPAslAiB6WBaf2XIceUjkE2LZox%2Bvz9rwk2NKJPnc%2BWsgjODoayr%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIMFkAd7JOXIm46919CKtwDs8M2gGgyXL1fwxlAvycFSxfQ51AE%2B9M%2FFDP%2FWL8NKCZTuugQswP0AWmUnBuG0kv6iQ5LtbWiRWkJkZ6EYwst5i1A4a0cOU%2FdOTW0H4q8cMcRjcPjsFkqcJCK0SY3sjKKJjrR12zXTJ8C2tsDDv3DsFeOSa8v%2Bkz%2BkxwGDkTwSaUi6yvoSYcZGPnI8Le12CIiHGl6eqTpAq5nx%2ByBGKnjNjygNsdDuQ%2F%2Fvs%2ByQypPCvJmaXFq7%2B2V7WCzFGGTGrfHsYfHRL6TVE0RwZDtvBw5DIG90AydsMConnz3TzZUyWrbXBJnrc47R2LGlatm94m9tZGkacYlwxvG9KWGFi8u0GXT00PLj3TvISIKqUjURyOZq1REp3ObKH8pAcBYrlf0CYvMfkvj2qMZAJmdunHeMwnDzwHzlKOvRh%2BSu7rSynmoKEYymYT1IrDzs5SxlrHckuwNY7OpJIv1zMk0ieu4qkOzjoSdEFRa%2BuCiiCd6%2FB3D1a46bBYddmq%2BnRPIgdL47Y6wqb%2FRHSrjVhDPWwZc%2FqsezwVfo8qsCS07Si7B4NPXYnK0F76HFjIx5OKdudSzeVfbo6D47FtE7KZnhm%2B8IEoMaG22iziT5pZJgJq7s%2BvOc7Je6YDNvLfX1cYw%2B%2FmDzgY6pgG7hd1gRARdH14%2BlPg110KZCouCqPmOEi1ni9vWKhaoznC0WDq1FY94OVyWVt9v%2F3RX4bYkYclbGci1W1kZYRsbu1kTchA02P5kwXyUVmHCF6BVxeyNzd3fhvVDUVjP07sTFPR4HGMuAqxoP8cRCfOUEN8Ah2XjN8beKbElYf%2BFZRZWPhuJWZm9bYB7N6iZlBqhThxE8VvwzTLrnmeZ5b%2B7foomDWJW&X-Amz-Signature=9cc29d7bc7f3c376c31adf5bac146ddff53cd159f530ac96da064dfda2cc62a7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466643GWWNS%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDNmBSYWgv2UhxzaEzexhlwn9zv4Red7pkgrL%2BdPPAslAiB6WBaf2XIceUjkE2LZox%2Bvz9rwk2NKJPnc%2BWsgjODoayr%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIMFkAd7JOXIm46919CKtwDs8M2gGgyXL1fwxlAvycFSxfQ51AE%2B9M%2FFDP%2FWL8NKCZTuugQswP0AWmUnBuG0kv6iQ5LtbWiRWkJkZ6EYwst5i1A4a0cOU%2FdOTW0H4q8cMcRjcPjsFkqcJCK0SY3sjKKJjrR12zXTJ8C2tsDDv3DsFeOSa8v%2Bkz%2BkxwGDkTwSaUi6yvoSYcZGPnI8Le12CIiHGl6eqTpAq5nx%2ByBGKnjNjygNsdDuQ%2F%2Fvs%2ByQypPCvJmaXFq7%2B2V7WCzFGGTGrfHsYfHRL6TVE0RwZDtvBw5DIG90AydsMConnz3TzZUyWrbXBJnrc47R2LGlatm94m9tZGkacYlwxvG9KWGFi8u0GXT00PLj3TvISIKqUjURyOZq1REp3ObKH8pAcBYrlf0CYvMfkvj2qMZAJmdunHeMwnDzwHzlKOvRh%2BSu7rSynmoKEYymYT1IrDzs5SxlrHckuwNY7OpJIv1zMk0ieu4qkOzjoSdEFRa%2BuCiiCd6%2FB3D1a46bBYddmq%2BnRPIgdL47Y6wqb%2FRHSrjVhDPWwZc%2FqsezwVfo8qsCS07Si7B4NPXYnK0F76HFjIx5OKdudSzeVfbo6D47FtE7KZnhm%2B8IEoMaG22iziT5pZJgJq7s%2BvOc7Je6YDNvLfX1cYw%2B%2FmDzgY6pgG7hd1gRARdH14%2BlPg110KZCouCqPmOEi1ni9vWKhaoznC0WDq1FY94OVyWVt9v%2F3RX4bYkYclbGci1W1kZYRsbu1kTchA02P5kwXyUVmHCF6BVxeyNzd3fhvVDUVjP07sTFPR4HGMuAqxoP8cRCfOUEN8Ah2XjN8beKbElYf%2BFZRZWPhuJWZm9bYB7N6iZlBqhThxE8VvwzTLrnmeZ5b%2B7foomDWJW&X-Amz-Signature=4dd7935b0526392e8436964f7599ca7b8768c237632efbd05b1e9a3e3c7bdf02&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466643GWWNS%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDNmBSYWgv2UhxzaEzexhlwn9zv4Red7pkgrL%2BdPPAslAiB6WBaf2XIceUjkE2LZox%2Bvz9rwk2NKJPnc%2BWsgjODoayr%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIMFkAd7JOXIm46919CKtwDs8M2gGgyXL1fwxlAvycFSxfQ51AE%2B9M%2FFDP%2FWL8NKCZTuugQswP0AWmUnBuG0kv6iQ5LtbWiRWkJkZ6EYwst5i1A4a0cOU%2FdOTW0H4q8cMcRjcPjsFkqcJCK0SY3sjKKJjrR12zXTJ8C2tsDDv3DsFeOSa8v%2Bkz%2BkxwGDkTwSaUi6yvoSYcZGPnI8Le12CIiHGl6eqTpAq5nx%2ByBGKnjNjygNsdDuQ%2F%2Fvs%2ByQypPCvJmaXFq7%2B2V7WCzFGGTGrfHsYfHRL6TVE0RwZDtvBw5DIG90AydsMConnz3TzZUyWrbXBJnrc47R2LGlatm94m9tZGkacYlwxvG9KWGFi8u0GXT00PLj3TvISIKqUjURyOZq1REp3ObKH8pAcBYrlf0CYvMfkvj2qMZAJmdunHeMwnDzwHzlKOvRh%2BSu7rSynmoKEYymYT1IrDzs5SxlrHckuwNY7OpJIv1zMk0ieu4qkOzjoSdEFRa%2BuCiiCd6%2FB3D1a46bBYddmq%2BnRPIgdL47Y6wqb%2FRHSrjVhDPWwZc%2FqsezwVfo8qsCS07Si7B4NPXYnK0F76HFjIx5OKdudSzeVfbo6D47FtE7KZnhm%2B8IEoMaG22iziT5pZJgJq7s%2BvOc7Je6YDNvLfX1cYw%2B%2FmDzgY6pgG7hd1gRARdH14%2BlPg110KZCouCqPmOEi1ni9vWKhaoznC0WDq1FY94OVyWVt9v%2F3RX4bYkYclbGci1W1kZYRsbu1kTchA02P5kwXyUVmHCF6BVxeyNzd3fhvVDUVjP07sTFPR4HGMuAqxoP8cRCfOUEN8Ah2XjN8beKbElYf%2BFZRZWPhuJWZm9bYB7N6iZlBqhThxE8VvwzTLrnmeZ5b%2B7foomDWJW&X-Amz-Signature=aa2b61f24cb8982a599724c403204ae06b6a70e38409145c676d01c8bc08d8f3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZLEO2DWV%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2FdNAQguq3Ymzbpoun%2Ft0MHdXGXEO0vmBSnVHCExZvBgIgcZ76%2Ff8ScADGgEGhmv9qZsAby5sz%2FqcWxy1sRk4RW30q%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDHznu7GTTnWsSOavlSrcAxAwG6Vtv3TqNiCHokI5XyoZcL%2FUuY7ME%2F2xPTXo%2F3KTeHKsZe%2FxdDS7gCB6k3NRhtty1yo8scFAp5QeTgI07sUj8Ham%2FHuqsWaQcTFrnZNLOp%2FyBIBg1AtV7jLX%2B6FznbzoO5RDMQqhOWD1OhTzygPI1TP5Mf1cGsgztC67ckYD3AxTgkCJ%2BmR3%2FIlr5X%2BT9OBuUfZTUzi3M8l0sTs4qSHgEBvMVUmTpJ1OIIQj%2BNHld1I5X9s4cMe9OAMaGlmG4MGcP5XONHDAxA6rvnJlv%2BrJAOKtuyzpH1RNTqpmdo5Vv5YL5znYBosrAdR7DtEtMUYM4CvrD52JTudrebBkojHhdU7ZdV39b98UWKUaQmVzKGxmyEMPNeDI4orAbB61xSgHEba2zwi4%2BKtE3W4VXaEYy3YFCXjBB0e2f0pw8lh9ERJD5y76ioXR7BPafzn8SY420E0arXBhHn4A6W9p9aDVwJMzs21VfM1izi1mHIfKsBLpcXfFzdmLaBAU2lvKPtBFaDXwWLtlYvC4mO6RJ0bQkpl1xbydlKWb%2FFIhfP7AD%2FvMgjmU8QQOyNnWwb2JA2ludT5RGSOwZlR7m8cwzWz5gxO8aQ1XWQL98MoP%2BYHLUUHS0M%2B5MWPq1Z8UMOj4g84GOqUBNb7%2Fwz5owCBo2wEm2SampTeGf2%2B%2FkZWlQ16IR4ulbhHPXajAw3l2CATUmu%2FVBrRyGmSKlUC2UCnbntR8GQGbEk8QRUjTXLCaElkcFWmS4HMyin6RMubDhxylm9aIJhy2rAVGpLEPL8cJDuDxe1IEuVprYW8TyE4yuJknJbtw3%2BiP1bYvVMWs%2Bsl%2BwhzdVyQbyUAkeywmzjtfHnkSLQqDj9V8f7M2&X-Amz-Signature=5a5bfd7fe31264a4f123d8bf06c3b9b29bcdd465a0e984e5300683613874c849&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZLEO2DWV%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2FdNAQguq3Ymzbpoun%2Ft0MHdXGXEO0vmBSnVHCExZvBgIgcZ76%2Ff8ScADGgEGhmv9qZsAby5sz%2FqcWxy1sRk4RW30q%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDHznu7GTTnWsSOavlSrcAxAwG6Vtv3TqNiCHokI5XyoZcL%2FUuY7ME%2F2xPTXo%2F3KTeHKsZe%2FxdDS7gCB6k3NRhtty1yo8scFAp5QeTgI07sUj8Ham%2FHuqsWaQcTFrnZNLOp%2FyBIBg1AtV7jLX%2B6FznbzoO5RDMQqhOWD1OhTzygPI1TP5Mf1cGsgztC67ckYD3AxTgkCJ%2BmR3%2FIlr5X%2BT9OBuUfZTUzi3M8l0sTs4qSHgEBvMVUmTpJ1OIIQj%2BNHld1I5X9s4cMe9OAMaGlmG4MGcP5XONHDAxA6rvnJlv%2BrJAOKtuyzpH1RNTqpmdo5Vv5YL5znYBosrAdR7DtEtMUYM4CvrD52JTudrebBkojHhdU7ZdV39b98UWKUaQmVzKGxmyEMPNeDI4orAbB61xSgHEba2zwi4%2BKtE3W4VXaEYy3YFCXjBB0e2f0pw8lh9ERJD5y76ioXR7BPafzn8SY420E0arXBhHn4A6W9p9aDVwJMzs21VfM1izi1mHIfKsBLpcXfFzdmLaBAU2lvKPtBFaDXwWLtlYvC4mO6RJ0bQkpl1xbydlKWb%2FFIhfP7AD%2FvMgjmU8QQOyNnWwb2JA2ludT5RGSOwZlR7m8cwzWz5gxO8aQ1XWQL98MoP%2BYHLUUHS0M%2B5MWPq1Z8UMOj4g84GOqUBNb7%2Fwz5owCBo2wEm2SampTeGf2%2B%2FkZWlQ16IR4ulbhHPXajAw3l2CATUmu%2FVBrRyGmSKlUC2UCnbntR8GQGbEk8QRUjTXLCaElkcFWmS4HMyin6RMubDhxylm9aIJhy2rAVGpLEPL8cJDuDxe1IEuVprYW8TyE4yuJknJbtw3%2BiP1bYvVMWs%2Bsl%2BwhzdVyQbyUAkeywmzjtfHnkSLQqDj9V8f7M2&X-Amz-Signature=19bbe78ba1bb01154b497ed69bedcd6fb53a2e253ed6aefbbebf235b3c214ecd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZLEO2DWV%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2FdNAQguq3Ymzbpoun%2Ft0MHdXGXEO0vmBSnVHCExZvBgIgcZ76%2Ff8ScADGgEGhmv9qZsAby5sz%2FqcWxy1sRk4RW30q%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDHznu7GTTnWsSOavlSrcAxAwG6Vtv3TqNiCHokI5XyoZcL%2FUuY7ME%2F2xPTXo%2F3KTeHKsZe%2FxdDS7gCB6k3NRhtty1yo8scFAp5QeTgI07sUj8Ham%2FHuqsWaQcTFrnZNLOp%2FyBIBg1AtV7jLX%2B6FznbzoO5RDMQqhOWD1OhTzygPI1TP5Mf1cGsgztC67ckYD3AxTgkCJ%2BmR3%2FIlr5X%2BT9OBuUfZTUzi3M8l0sTs4qSHgEBvMVUmTpJ1OIIQj%2BNHld1I5X9s4cMe9OAMaGlmG4MGcP5XONHDAxA6rvnJlv%2BrJAOKtuyzpH1RNTqpmdo5Vv5YL5znYBosrAdR7DtEtMUYM4CvrD52JTudrebBkojHhdU7ZdV39b98UWKUaQmVzKGxmyEMPNeDI4orAbB61xSgHEba2zwi4%2BKtE3W4VXaEYy3YFCXjBB0e2f0pw8lh9ERJD5y76ioXR7BPafzn8SY420E0arXBhHn4A6W9p9aDVwJMzs21VfM1izi1mHIfKsBLpcXfFzdmLaBAU2lvKPtBFaDXwWLtlYvC4mO6RJ0bQkpl1xbydlKWb%2FFIhfP7AD%2FvMgjmU8QQOyNnWwb2JA2ludT5RGSOwZlR7m8cwzWz5gxO8aQ1XWQL98MoP%2BYHLUUHS0M%2B5MWPq1Z8UMOj4g84GOqUBNb7%2Fwz5owCBo2wEm2SampTeGf2%2B%2FkZWlQ16IR4ulbhHPXajAw3l2CATUmu%2FVBrRyGmSKlUC2UCnbntR8GQGbEk8QRUjTXLCaElkcFWmS4HMyin6RMubDhxylm9aIJhy2rAVGpLEPL8cJDuDxe1IEuVprYW8TyE4yuJknJbtw3%2BiP1bYvVMWs%2Bsl%2BwhzdVyQbyUAkeywmzjtfHnkSLQqDj9V8f7M2&X-Amz-Signature=5606fa59350cd9dc4189de70721035b6233f06fcf4d156d36dbc9c73ca0fff02&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZLEO2DWV%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085542Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2FdNAQguq3Ymzbpoun%2Ft0MHdXGXEO0vmBSnVHCExZvBgIgcZ76%2Ff8ScADGgEGhmv9qZsAby5sz%2FqcWxy1sRk4RW30q%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDHznu7GTTnWsSOavlSrcAxAwG6Vtv3TqNiCHokI5XyoZcL%2FUuY7ME%2F2xPTXo%2F3KTeHKsZe%2FxdDS7gCB6k3NRhtty1yo8scFAp5QeTgI07sUj8Ham%2FHuqsWaQcTFrnZNLOp%2FyBIBg1AtV7jLX%2B6FznbzoO5RDMQqhOWD1OhTzygPI1TP5Mf1cGsgztC67ckYD3AxTgkCJ%2BmR3%2FIlr5X%2BT9OBuUfZTUzi3M8l0sTs4qSHgEBvMVUmTpJ1OIIQj%2BNHld1I5X9s4cMe9OAMaGlmG4MGcP5XONHDAxA6rvnJlv%2BrJAOKtuyzpH1RNTqpmdo5Vv5YL5znYBosrAdR7DtEtMUYM4CvrD52JTudrebBkojHhdU7ZdV39b98UWKUaQmVzKGxmyEMPNeDI4orAbB61xSgHEba2zwi4%2BKtE3W4VXaEYy3YFCXjBB0e2f0pw8lh9ERJD5y76ioXR7BPafzn8SY420E0arXBhHn4A6W9p9aDVwJMzs21VfM1izi1mHIfKsBLpcXfFzdmLaBAU2lvKPtBFaDXwWLtlYvC4mO6RJ0bQkpl1xbydlKWb%2FFIhfP7AD%2FvMgjmU8QQOyNnWwb2JA2ludT5RGSOwZlR7m8cwzWz5gxO8aQ1XWQL98MoP%2BYHLUUHS0M%2B5MWPq1Z8UMOj4g84GOqUBNb7%2Fwz5owCBo2wEm2SampTeGf2%2B%2FkZWlQ16IR4ulbhHPXajAw3l2CATUmu%2FVBrRyGmSKlUC2UCnbntR8GQGbEk8QRUjTXLCaElkcFWmS4HMyin6RMubDhxylm9aIJhy2rAVGpLEPL8cJDuDxe1IEuVprYW8TyE4yuJknJbtw3%2BiP1bYvVMWs%2Bsl%2BwhzdVyQbyUAkeywmzjtfHnkSLQqDj9V8f7M2&X-Amz-Signature=668bf7d7e36a2498194910db96b7e4aed5f2d3e1b55c4ab5583dc40e25902ba1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664AG5EX3M%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085543Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDj%2F%2BGab8i5CAO2CK2Ov5XAgMba6tmyKZoJx7Io1lnjlAIhAMQgzd5tGnqinher2hfcEp5CldQqfOxkf0m2a5y6KfH3Kv8DCHoQABoMNjM3NDIzMTgzODA1IgzlRTwjwpE0jQyhKogq3ANBz8%2FWCKkZEN2j%2FAkOW3lNpkBkMTfUX62IXZl1kOzbnICbyRCEgwdcfRS7pI0zpfw5UpLn87%2F5wHSplzps5B5nZbMu3wuOowF193NFXuIQ%2FyLGRxnf3FVSP2gHNjuA0%2Bln3Z3e1uzeoBmiSRbKme4IVE2xGCFhKWn3gh1riWXwM%2BRg7XIXxIlbE0TBbaOho7a9tTOakggAPP17zKt8VRvZay%2B9N6F6CamcAVnvmyVlefh9VxFJ422Y8jzHbhLPjg38felfUWi3OeSX32nN2f%2BXXpywuV%2BukDPITMmq6hLnZDU4X5bEY5bIVkFu1WD%2BxKVXoFQ0HA%2FgaQnn25tPzMeGyQkSlAswBmRXK93KCTVoHyxtCgNrXRo5kixla393IXriuuMva%2F934f0aa0wuxVYWnRvbHiV6sDDJ%2FxSEQL1lRHdu%2FItrVXciakjgC8N%2BjUExvQ0C0tZcWkF9Q0WmCFOqW7WXjlYv2zFceC%2FlSXZbqXaGne583EqLiOPHuxZo%2Fgk%2Bbqu3jeH0L7w%2BzQL32khyAZ1CBqXWy8foIT59dB8EYPCLPJom4NDdexZaUtWKAsMqEVZ4gebaUpn0%2Btj0ysjZYYYt6T7LfHb2okPK%2BljS1sBicATkx5F3yxfVAzC0%2BIPOBjqkAW8QGXo0u%2FXrLehcrmZYfINTyKC3iWAdmqEud8y9FkIoo7TyIdPoAr5HahL3RM%2F0cvCh2WVcSm94765dg8Ph9%2FrwHtfINDVlDTg8SqOnfqKSjSLjfE9BtzOsFtwp3%2F7uVvfJ7bztd2Ud32wo1huv%2FUVGSTKo3nuBaeGNULsGTKpIO%2BV9OiuJdJjoTEcxWoNAGT9TB98oYf0xP4k%2BKYnn4GJ5ayuy&X-Amz-Signature=cf4ccad7e4a5696f1df7050d5e1702e8e5e94a5ffd1103c7bee2bcede44c8db3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RM4UP3P5%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIQCeICV%2Brj1OJ5a4aZutEEJHvJOnudz0cX4eBt8wPfmIpQIfWwcRKuopQl8cP0og%2BqAsD33%2BcfouD5A%2BcLmMUizwKyr%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIMUwDinxWvqULBXbSCKtwDZh0mbnn54RcHiYJlF1JRc0t9koTB98ZzDvhIhRaLoebTFO6QjqGkFcXlGfdIdzkKaDf%2BIh6JqTGsUqRIH%2BNTGhhJufpItdnCS8881nMas9MUfX5d8UkQWWV4Yo2mTVnt60qiUqSiQTO91Mh3Wcjpu0Rs%2BX2GZgfXVMqbPrvT8PojUfN5IT8vvVlxrz84SxO33VdR2UzqnQqGFxAn7xGDwDgZlnCQ%2Fx2Aehqb%2FKvwSofglvZ8%2BMwicnAvg3E3VE6%2B8KTQWxDRPiSvgH01k8Gi3WGlndfJFMx5D7R9ixsLFZR7z%2FUz%2FycuE1RG4El9QBXtI56WP7mp2JWl%2BX%2F4zqRaIVZNo8%2FpCBih3ARF2hbGzie9jWX5NcN0l015t5L6j3u0X3Npr4DDSIP98KWlXgd0vtCniYqM1sp5%2FyV5srN211kQ5rMIFk3IgIv1o4p9D3JPk6ar%2FdMcicKSkxO9IPY0B1QYY6aA3jmUgLt12H2I3iFKcVoa1Y2p9EYIUVZsiDsYoGDdoCPAvXR1TpSUtsPkfTgvGb98pgqO1MEcE6OAaDA5%2FnM%2FeAoi00xeNwn7mb9hxtDCPwdMKrSCtnfMpsalx0FXPBPN7KiykHr4VwHqKvGlofzCEaL0WuPHh4EwnviDzgY6pgEt9O4KHjqdIXp9Bc%2B7sAkpbT%2F8f9RL2SohCqr13fFWnfPq7nKAISvjv%2FmI1kgf4AGRG1gMyNuZYgjt1AuEMj1nSn3wbZWAsaQGzOFzqPAbYLmtzsBDtTPAqUO%2B5%2Fkh3mMY0uISfPo7Y%2Bo8Z%2FmT2vz4pPXaoPCqm%2FF%2B%2FHjB%2BiJ9r%2FqVnQSvSi2rWLP%2FT%2Fg1%2FGHo7aQNd%2BTXt9O044J9AHynVE%2BQRX%2BC&X-Amz-Signature=0b51fec32423e8ee7ef780c5106166ac43ebdeef05217b0dd9101000ed2bba2a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RM4UP3P5%2F20260323%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260323T085544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIQCeICV%2Brj1OJ5a4aZutEEJHvJOnudz0cX4eBt8wPfmIpQIfWwcRKuopQl8cP0og%2BqAsD33%2BcfouD5A%2BcLmMUizwKyr%2FAwh6EAAaDDYzNzQyMzE4MzgwNSIMUwDinxWvqULBXbSCKtwDZh0mbnn54RcHiYJlF1JRc0t9koTB98ZzDvhIhRaLoebTFO6QjqGkFcXlGfdIdzkKaDf%2BIh6JqTGsUqRIH%2BNTGhhJufpItdnCS8881nMas9MUfX5d8UkQWWV4Yo2mTVnt60qiUqSiQTO91Mh3Wcjpu0Rs%2BX2GZgfXVMqbPrvT8PojUfN5IT8vvVlxrz84SxO33VdR2UzqnQqGFxAn7xGDwDgZlnCQ%2Fx2Aehqb%2FKvwSofglvZ8%2BMwicnAvg3E3VE6%2B8KTQWxDRPiSvgH01k8Gi3WGlndfJFMx5D7R9ixsLFZR7z%2FUz%2FycuE1RG4El9QBXtI56WP7mp2JWl%2BX%2F4zqRaIVZNo8%2FpCBih3ARF2hbGzie9jWX5NcN0l015t5L6j3u0X3Npr4DDSIP98KWlXgd0vtCniYqM1sp5%2FyV5srN211kQ5rMIFk3IgIv1o4p9D3JPk6ar%2FdMcicKSkxO9IPY0B1QYY6aA3jmUgLt12H2I3iFKcVoa1Y2p9EYIUVZsiDsYoGDdoCPAvXR1TpSUtsPkfTgvGb98pgqO1MEcE6OAaDA5%2FnM%2FeAoi00xeNwn7mb9hxtDCPwdMKrSCtnfMpsalx0FXPBPN7KiykHr4VwHqKvGlofzCEaL0WuPHh4EwnviDzgY6pgEt9O4KHjqdIXp9Bc%2B7sAkpbT%2F8f9RL2SohCqr13fFWnfPq7nKAISvjv%2FmI1kgf4AGRG1gMyNuZYgjt1AuEMj1nSn3wbZWAsaQGzOFzqPAbYLmtzsBDtTPAqUO%2B5%2Fkh3mMY0uISfPo7Y%2Bo8Z%2FmT2vz4pPXaoPCqm%2FF%2B%2FHjB%2BiJ9r%2FqVnQSvSi2rWLP%2FT%2Fg1%2FGHo7aQNd%2BTXt9O044J9AHynVE%2BQRX%2BC&X-Amz-Signature=fa42334f4444999b7073000f3154636d8e765b0c6b17c83b0d114408fc7fe373&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
