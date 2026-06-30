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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UHESTWJ2%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105533Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDUq%2Bfa43y449zpQBxrf25kzFi1az4%2F7cE73uxuscclTwIgXGe28cIZ9ZsIGv2s9ssQSOiAyhGuf8lgdH9RacNLcwQqiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLeZPcUOeikb8h3r4yrcA9e0l4i2y48spDkigQyoDGCJS7GZlY5BtPeEBkjHWEsOfTSKdjTCF2imCvZuypChs6AgpnwtyPk3SYzUyYqdIQ%2FMcXg8ZWrkE51es5cXagZuGqIO92SYJViHh1n0cRFiIulhQVHV1V6POt4M1TyHp6KWmDJv3cSBHoIAKF490ktBRtNRCxijzehp4QMqlVHJmh3AGFI8GovYDoGuG36msZBuPk67VuVWeSTC5c4C3f5p832l8eFn7umssOG5%2B1K6rwkzgWuReh4520TYJ49TT0Yl1OxdbYue5cNL7qdCYALZJd%2BVDv9KSO8uTtKfk3E43qz2xhJnBTgYqMil0aRpaEitRPUFCJn%2BuNK1tn1FZCeq167g5I9rgEtaVWN%2BfJ73JCO%2FmbRDcpHNW2Ftgakq5D8926tPn5rKGwojqISC9OtigGY12ojPZbtjO%2Br0ClA20FS%2FmNYwIdB2Aq7iEgmP0c89nknSQS%2FFpqdCDOL%2FOs75SUICNnAWxdagAscbLJ59hPXpI7kaD%2B4dyKVxolcDA%2BTt6Xzd%2Bs0IlfdwlVmJrde%2F%2Brd27lyqCgZ49fKWaheHcxU%2FpmFEWFGHqCS1BSDuDAjEF3aRJgxHa6UCkCESb0ArcIc6VExNYMG0I8owMIm2jtIGOqUBNFccDvI6mr9ktZ50%2FZGM2CJHN1iQcw8QY4Xb0EBLEEUAqAP026LxMkfrNCGoYpAhAyVTEDMbJXwP0lhzlpEXZTF939oOfxbCVORlTBwkCiMVTJUVIKXagH%2FewZuV9vsufploWrCjgPXGPZp8tTz56xrDDWitrrcV7aCEJA4kGAU5QiIKEZDAXX%2FathhfDvdqfekSSDnOCsdE1KLG%2BrboQE1TpZEK&X-Amz-Signature=9b5fb6c04e14d83f5651118b4841b8597a8689dd8693fe23e740e72c7f8b3c95&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UHESTWJ2%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105533Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDUq%2Bfa43y449zpQBxrf25kzFi1az4%2F7cE73uxuscclTwIgXGe28cIZ9ZsIGv2s9ssQSOiAyhGuf8lgdH9RacNLcwQqiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLeZPcUOeikb8h3r4yrcA9e0l4i2y48spDkigQyoDGCJS7GZlY5BtPeEBkjHWEsOfTSKdjTCF2imCvZuypChs6AgpnwtyPk3SYzUyYqdIQ%2FMcXg8ZWrkE51es5cXagZuGqIO92SYJViHh1n0cRFiIulhQVHV1V6POt4M1TyHp6KWmDJv3cSBHoIAKF490ktBRtNRCxijzehp4QMqlVHJmh3AGFI8GovYDoGuG36msZBuPk67VuVWeSTC5c4C3f5p832l8eFn7umssOG5%2B1K6rwkzgWuReh4520TYJ49TT0Yl1OxdbYue5cNL7qdCYALZJd%2BVDv9KSO8uTtKfk3E43qz2xhJnBTgYqMil0aRpaEitRPUFCJn%2BuNK1tn1FZCeq167g5I9rgEtaVWN%2BfJ73JCO%2FmbRDcpHNW2Ftgakq5D8926tPn5rKGwojqISC9OtigGY12ojPZbtjO%2Br0ClA20FS%2FmNYwIdB2Aq7iEgmP0c89nknSQS%2FFpqdCDOL%2FOs75SUICNnAWxdagAscbLJ59hPXpI7kaD%2B4dyKVxolcDA%2BTt6Xzd%2Bs0IlfdwlVmJrde%2F%2Brd27lyqCgZ49fKWaheHcxU%2FpmFEWFGHqCS1BSDuDAjEF3aRJgxHa6UCkCESb0ArcIc6VExNYMG0I8owMIm2jtIGOqUBNFccDvI6mr9ktZ50%2FZGM2CJHN1iQcw8QY4Xb0EBLEEUAqAP026LxMkfrNCGoYpAhAyVTEDMbJXwP0lhzlpEXZTF939oOfxbCVORlTBwkCiMVTJUVIKXagH%2FewZuV9vsufploWrCjgPXGPZp8tTz56xrDDWitrrcV7aCEJA4kGAU5QiIKEZDAXX%2FathhfDvdqfekSSDnOCsdE1KLG%2BrboQE1TpZEK&X-Amz-Signature=bb1fd9a6cdb00f63d9ab2b36291e65647863f9bed7dac1c748b2ac88c380f6d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UHESTWJ2%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105533Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDUq%2Bfa43y449zpQBxrf25kzFi1az4%2F7cE73uxuscclTwIgXGe28cIZ9ZsIGv2s9ssQSOiAyhGuf8lgdH9RacNLcwQqiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLeZPcUOeikb8h3r4yrcA9e0l4i2y48spDkigQyoDGCJS7GZlY5BtPeEBkjHWEsOfTSKdjTCF2imCvZuypChs6AgpnwtyPk3SYzUyYqdIQ%2FMcXg8ZWrkE51es5cXagZuGqIO92SYJViHh1n0cRFiIulhQVHV1V6POt4M1TyHp6KWmDJv3cSBHoIAKF490ktBRtNRCxijzehp4QMqlVHJmh3AGFI8GovYDoGuG36msZBuPk67VuVWeSTC5c4C3f5p832l8eFn7umssOG5%2B1K6rwkzgWuReh4520TYJ49TT0Yl1OxdbYue5cNL7qdCYALZJd%2BVDv9KSO8uTtKfk3E43qz2xhJnBTgYqMil0aRpaEitRPUFCJn%2BuNK1tn1FZCeq167g5I9rgEtaVWN%2BfJ73JCO%2FmbRDcpHNW2Ftgakq5D8926tPn5rKGwojqISC9OtigGY12ojPZbtjO%2Br0ClA20FS%2FmNYwIdB2Aq7iEgmP0c89nknSQS%2FFpqdCDOL%2FOs75SUICNnAWxdagAscbLJ59hPXpI7kaD%2B4dyKVxolcDA%2BTt6Xzd%2Bs0IlfdwlVmJrde%2F%2Brd27lyqCgZ49fKWaheHcxU%2FpmFEWFGHqCS1BSDuDAjEF3aRJgxHa6UCkCESb0ArcIc6VExNYMG0I8owMIm2jtIGOqUBNFccDvI6mr9ktZ50%2FZGM2CJHN1iQcw8QY4Xb0EBLEEUAqAP026LxMkfrNCGoYpAhAyVTEDMbJXwP0lhzlpEXZTF939oOfxbCVORlTBwkCiMVTJUVIKXagH%2FewZuV9vsufploWrCjgPXGPZp8tTz56xrDDWitrrcV7aCEJA4kGAU5QiIKEZDAXX%2FathhfDvdqfekSSDnOCsdE1KLG%2BrboQE1TpZEK&X-Amz-Signature=6bee28e34450cb24d53696e91ac3a32bf81d864fb1a91d7b4398abc779e483d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WWJULBHW%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFCCXXG8axcNVl%2FP5LgUXIF2jSRou3G%2FuJD4lOKeDZzHAiBZQ%2FFOl0k1quakch49vR8rE%2FMqg1DqDF0M2nlmjfWQEyqIBAjE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDzDuSLVnuP5SACweKtwD1TP5DZIfArSDdaXj7VAhVod%2Be3LrHKXnlOAPjNqKfENyAamildgPbbqTnXT%2F2Esap0%2F9dWkMxYyMrw1knewaLek8gcgX2ayJ7xPfZvBIQTUWDOEiQt2Zs7U6j25TiGEiLStHZMlLdvPn%2Bq5QNk4k9T6%2F7H9oc7CZBpab%2FiU%2FlWTyOleOKS3UIkgQaMBRSnQQQseMF7I2EBpEgoJrnHlKuzMBUBHnlOFdews%2BaVB6Bv%2BdVrQx3316FkW%2FEPK8WTSkdpKCn110DwxjImokEMo%2BZXuZTJtoY4DiDJgv2Z7Mh%2BLwyOJ4ZpU1txxs89D2AYPUyGEVyvrTqW%2F3msTuwjLt6JNI%2B2n7d%2F%2B4aXGoazrlaAvC6niaNRnzLvTsNvzKV6VP032j1GhhZ%2BQq6ecLIq4lBrm3ZHBZyLLEnaQMv6IphEF5Szfn73QTKGkXhacEoy6D4cp2jz%2Fig7GUdMffWncHd98xaQV9STXb0On6XV3%2BfY7WlUv21UBvCty5QcusXtvWoh%2B7ED4ApGZdcwizw5ZnYFjyDJGJZz5EY0eYZ7ujoteZtEi2%2Bt2yqrRntBVLlHYrgUORSd0vavxvH3Ngx3d7%2FbM5m%2BOHvNN%2BMYP2qsM4G5UDLR%2FgxFU1DxtgvOAwoLWO0gY6pgFsDpSWb8JcAjwxHMxqUvdjQZO6k2O5zrGaaUOSj7jPafOv%2BZPbett1nY1mJy599jvNLQRLabrH4G8omvcHHOaTwQCY7PkIgRDlao3%2B5mliaC6kdlPuMZ4Uti1y42ogBqvYPCj%2FMyLClZkqu5yMk2Ap6A7FY%2BqiXbPDgGhCN4uxqiTzO%2FK19kiH7CLgq405Q10xEPqTmuBsqczUReT%2F%2Fe%2F7cNs9lLoV&X-Amz-Signature=405ec503077550c92e79a1a8f31a59ac7b5d2805f30b4090ca435fd0cc0d4f06&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WWJULBHW%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFCCXXG8axcNVl%2FP5LgUXIF2jSRou3G%2FuJD4lOKeDZzHAiBZQ%2FFOl0k1quakch49vR8rE%2FMqg1DqDF0M2nlmjfWQEyqIBAjE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDzDuSLVnuP5SACweKtwD1TP5DZIfArSDdaXj7VAhVod%2Be3LrHKXnlOAPjNqKfENyAamildgPbbqTnXT%2F2Esap0%2F9dWkMxYyMrw1knewaLek8gcgX2ayJ7xPfZvBIQTUWDOEiQt2Zs7U6j25TiGEiLStHZMlLdvPn%2Bq5QNk4k9T6%2F7H9oc7CZBpab%2FiU%2FlWTyOleOKS3UIkgQaMBRSnQQQseMF7I2EBpEgoJrnHlKuzMBUBHnlOFdews%2BaVB6Bv%2BdVrQx3316FkW%2FEPK8WTSkdpKCn110DwxjImokEMo%2BZXuZTJtoY4DiDJgv2Z7Mh%2BLwyOJ4ZpU1txxs89D2AYPUyGEVyvrTqW%2F3msTuwjLt6JNI%2B2n7d%2F%2B4aXGoazrlaAvC6niaNRnzLvTsNvzKV6VP032j1GhhZ%2BQq6ecLIq4lBrm3ZHBZyLLEnaQMv6IphEF5Szfn73QTKGkXhacEoy6D4cp2jz%2Fig7GUdMffWncHd98xaQV9STXb0On6XV3%2BfY7WlUv21UBvCty5QcusXtvWoh%2B7ED4ApGZdcwizw5ZnYFjyDJGJZz5EY0eYZ7ujoteZtEi2%2Bt2yqrRntBVLlHYrgUORSd0vavxvH3Ngx3d7%2FbM5m%2BOHvNN%2BMYP2qsM4G5UDLR%2FgxFU1DxtgvOAwoLWO0gY6pgFsDpSWb8JcAjwxHMxqUvdjQZO6k2O5zrGaaUOSj7jPafOv%2BZPbett1nY1mJy599jvNLQRLabrH4G8omvcHHOaTwQCY7PkIgRDlao3%2B5mliaC6kdlPuMZ4Uti1y42ogBqvYPCj%2FMyLClZkqu5yMk2Ap6A7FY%2BqiXbPDgGhCN4uxqiTzO%2FK19kiH7CLgq405Q10xEPqTmuBsqczUReT%2F%2Fe%2F7cNs9lLoV&X-Amz-Signature=0912eba53fb7cef6714d98f2f0c5f1c7c873e4d6ca795fd491b4121d875ed027&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WWJULBHW%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFCCXXG8axcNVl%2FP5LgUXIF2jSRou3G%2FuJD4lOKeDZzHAiBZQ%2FFOl0k1quakch49vR8rE%2FMqg1DqDF0M2nlmjfWQEyqIBAjE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDzDuSLVnuP5SACweKtwD1TP5DZIfArSDdaXj7VAhVod%2Be3LrHKXnlOAPjNqKfENyAamildgPbbqTnXT%2F2Esap0%2F9dWkMxYyMrw1knewaLek8gcgX2ayJ7xPfZvBIQTUWDOEiQt2Zs7U6j25TiGEiLStHZMlLdvPn%2Bq5QNk4k9T6%2F7H9oc7CZBpab%2FiU%2FlWTyOleOKS3UIkgQaMBRSnQQQseMF7I2EBpEgoJrnHlKuzMBUBHnlOFdews%2BaVB6Bv%2BdVrQx3316FkW%2FEPK8WTSkdpKCn110DwxjImokEMo%2BZXuZTJtoY4DiDJgv2Z7Mh%2BLwyOJ4ZpU1txxs89D2AYPUyGEVyvrTqW%2F3msTuwjLt6JNI%2B2n7d%2F%2B4aXGoazrlaAvC6niaNRnzLvTsNvzKV6VP032j1GhhZ%2BQq6ecLIq4lBrm3ZHBZyLLEnaQMv6IphEF5Szfn73QTKGkXhacEoy6D4cp2jz%2Fig7GUdMffWncHd98xaQV9STXb0On6XV3%2BfY7WlUv21UBvCty5QcusXtvWoh%2B7ED4ApGZdcwizw5ZnYFjyDJGJZz5EY0eYZ7ujoteZtEi2%2Bt2yqrRntBVLlHYrgUORSd0vavxvH3Ngx3d7%2FbM5m%2BOHvNN%2BMYP2qsM4G5UDLR%2FgxFU1DxtgvOAwoLWO0gY6pgFsDpSWb8JcAjwxHMxqUvdjQZO6k2O5zrGaaUOSj7jPafOv%2BZPbett1nY1mJy599jvNLQRLabrH4G8omvcHHOaTwQCY7PkIgRDlao3%2B5mliaC6kdlPuMZ4Uti1y42ogBqvYPCj%2FMyLClZkqu5yMk2Ap6A7FY%2BqiXbPDgGhCN4uxqiTzO%2FK19kiH7CLgq405Q10xEPqTmuBsqczUReT%2F%2Fe%2F7cNs9lLoV&X-Amz-Signature=b48002cf40fff81347d69efd08957a52fad16edec5fcf8f0f0645e5e59a0fd8b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WWJULBHW%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFCCXXG8axcNVl%2FP5LgUXIF2jSRou3G%2FuJD4lOKeDZzHAiBZQ%2FFOl0k1quakch49vR8rE%2FMqg1DqDF0M2nlmjfWQEyqIBAjE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDzDuSLVnuP5SACweKtwD1TP5DZIfArSDdaXj7VAhVod%2Be3LrHKXnlOAPjNqKfENyAamildgPbbqTnXT%2F2Esap0%2F9dWkMxYyMrw1knewaLek8gcgX2ayJ7xPfZvBIQTUWDOEiQt2Zs7U6j25TiGEiLStHZMlLdvPn%2Bq5QNk4k9T6%2F7H9oc7CZBpab%2FiU%2FlWTyOleOKS3UIkgQaMBRSnQQQseMF7I2EBpEgoJrnHlKuzMBUBHnlOFdews%2BaVB6Bv%2BdVrQx3316FkW%2FEPK8WTSkdpKCn110DwxjImokEMo%2BZXuZTJtoY4DiDJgv2Z7Mh%2BLwyOJ4ZpU1txxs89D2AYPUyGEVyvrTqW%2F3msTuwjLt6JNI%2B2n7d%2F%2B4aXGoazrlaAvC6niaNRnzLvTsNvzKV6VP032j1GhhZ%2BQq6ecLIq4lBrm3ZHBZyLLEnaQMv6IphEF5Szfn73QTKGkXhacEoy6D4cp2jz%2Fig7GUdMffWncHd98xaQV9STXb0On6XV3%2BfY7WlUv21UBvCty5QcusXtvWoh%2B7ED4ApGZdcwizw5ZnYFjyDJGJZz5EY0eYZ7ujoteZtEi2%2Bt2yqrRntBVLlHYrgUORSd0vavxvH3Ngx3d7%2FbM5m%2BOHvNN%2BMYP2qsM4G5UDLR%2FgxFU1DxtgvOAwoLWO0gY6pgFsDpSWb8JcAjwxHMxqUvdjQZO6k2O5zrGaaUOSj7jPafOv%2BZPbett1nY1mJy599jvNLQRLabrH4G8omvcHHOaTwQCY7PkIgRDlao3%2B5mliaC6kdlPuMZ4Uti1y42ogBqvYPCj%2FMyLClZkqu5yMk2Ap6A7FY%2BqiXbPDgGhCN4uxqiTzO%2FK19kiH7CLgq405Q10xEPqTmuBsqczUReT%2F%2Fe%2F7cNs9lLoV&X-Amz-Signature=e2378010becdd555b65e18ff7e35303baa86d75ce30e6b268e4dc4ba0b1adc7c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SGALUQR4%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2TSfh7gkMI1vfDD44euv8KiOmNb%2FYuM04%2F9AP%2Fu0XqQIhAJMCIhhD6OQwKJGyYIqDs1%2BePVVam%2BAS33Jwx4IiBKSSKogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxVxJcrfx5hXIBa8Bwq3AOMUmMd1D51N30HbKnVcMviRWJBOfXBRMZwB9GdI0HWaRxtTpCHV8DDfv3Ka8LPBkL3XqWYK0M4MDeaiHeyp6jujobd1vtVDWCygsuZpLxnJXNgEts7ckcVmiPr3cdqjkjPiZIsw8%2FTDoBOTZtZnD4O70z2ubp%2FXSsd6ATvYF9L9vM2Y4pvspgxHwhYRgPhcRsa9Jdjk7COGl0UygdZ0k5gxsm3G5zfry36iByaxIsC5to9zaXJQOMGwLZRQzTCnKnt0uFc4qIl595kRGQJS4dRUl57dZC%2BdvNKxHAWRJBOhJP%2FZ3aI0%2F279f9l7ChYOtUMGs%2BmomnPpaPaph3BIeJ8S4MWGNtplt52JV6%2FMlDwSsEeA6Rv9F1aS0saNvyMOfqb1mbJ4VQf8ljaEPIIIb%2BJGXYMx6XmDXP%2BNUwUTcfoCFoTdqgLbp6mtlCKINF3u7A44UrFjhujIi4CeW4fEWyE5cPEiCT4b3UB2PnC%2By2%2Fq3Kd58OsaYL5n9D5LUTuYxRLHbx98UFQExggdQJ9EdUi1L79XxDvE48H4Wgb7%2FRYD1DNuy4fmxLxLQZ54x1yT%2Bk6I%2FPdcEHZa%2BPYEJ1BcaHhO5pgF7KjIhLC2imWxccej1CDmdoen74YzI0QdDDAtY7SBjqkAUW65zEX9E6%2FVJHwcxoSwNDBiCLE1Mh3TlkSMdMuMGaoIulEDSSiwFJundJvFB4SDA%2BN3UZR2OQKGdnCEftw6I71DKiWSNzmT5GpWLUCmEcevWtbaYRm2YUu68%2FCxv14n2ZmTdgoPZAx%2FyR1pv3qCOhDVZqWGm6h89yXvq3dQkg76snhQds8NI6VIvIqEIO6KpjmuAO2sPcSVS9jcdT9NUpR3Rk1&X-Amz-Signature=d951128aba0f55f5d60e81b28df4ee94852412785c325db111c9aa33ebe3635a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QN3CATPB%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2F%2BBtduAXSdJL8HiGGjwmvQoACzxiWw9MCVT3uk7OYQQIgaA%2B7sMOLLkdEiiwYQC56tLGoMeWIHCHpQl2lFVBqs7IqiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNpYNrjmTeGDUwy39SrcA2xQY4Ag4pLH%2BTEoRLud%2Bmtsv5t%2BVJHaYh36V8VNCOYK7ZL3iD7g3XAYTKzGzFI2DQ90CVh3tj9HTf5O9MW%2BVwz6KXlkSLG5W4b1jPB5XLxuPqglquA0kA4wrQAhLV7VsLsyPJjkXyevDCSTHc7fsCgUiwge3zcl32gjJt7ru%2BbwmtcLRgSgHoB28RReYskaI3CF9cwe2p%2FsvjSSUEHnavUy6W2SU%2FGfqmYYAY7gHSMmiNZ7kHcXlgCF%2FBQyk7gjtUvRV1ON1FGgzHaFw0Ipc9295pn73UXlgXeyBRQyUYW1Dj%2BPxH5FiwqEk%2BsniFEE85K4176r9wNbK40uOesBC5n%2B7f4pSllRkVf0bZruDpHsydI7VZzhj3gLX%2BYs%2BX%2F%2Bsvm%2F0Isy1GdJhUjSjhZJ4Cvrs2fLWYoh18Y3vxdbmuu0ZS0SKR3dBessvUNQsiYZzbxASdJEKUsdPnNgAzppBTJveRVbv8shxMWV5jN7tbUJW9Im%2BEi%2FDVOUIpVCJQcmaC5Y1eJUGc6HY5J9obDQf419XP77N1pTFNDTFkT3jKOTosxZAHu2J9rQ3gTtWpYN%2BXfKPxOeBlc6N8h4QBB4Sm%2BfmLRlygErO0Giobo8tETxlyc03Jf%2Bzx469rpTMJm1jtIGOqUBWAO0tZYOxBIZ21ZUdnjwujz6kEGe6%2Fydpk85XOKFK2izQI8%2BM%2FLPJ8nMdi4N3k%2BGlr%2BJtOn5oUMVf6Gr46k2bGdev4RAbh6EGdQ0A7jR%2FUeoy21iZxVcr%2F%2BC7MBGSa850XQVEpx6GabZUwbujTx7nRFNRv58MOd8OAYhOXQm66DKM5oBee0uHHJVoy9WkxPefs9PAk48oAkkBL4akwX7IXYVq9I%2F&X-Amz-Signature=d2bec4acba4e1f7e81c965b9b34f90a16135102a8e87eed3f3bf13539a4402d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QN3CATPB%2F20260630%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260630T105534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2F%2BBtduAXSdJL8HiGGjwmvQoACzxiWw9MCVT3uk7OYQQIgaA%2B7sMOLLkdEiiwYQC56tLGoMeWIHCHpQl2lFVBqs7IqiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNpYNrjmTeGDUwy39SrcA2xQY4Ag4pLH%2BTEoRLud%2Bmtsv5t%2BVJHaYh36V8VNCOYK7ZL3iD7g3XAYTKzGzFI2DQ90CVh3tj9HTf5O9MW%2BVwz6KXlkSLG5W4b1jPB5XLxuPqglquA0kA4wrQAhLV7VsLsyPJjkXyevDCSTHc7fsCgUiwge3zcl32gjJt7ru%2BbwmtcLRgSgHoB28RReYskaI3CF9cwe2p%2FsvjSSUEHnavUy6W2SU%2FGfqmYYAY7gHSMmiNZ7kHcXlgCF%2FBQyk7gjtUvRV1ON1FGgzHaFw0Ipc9295pn73UXlgXeyBRQyUYW1Dj%2BPxH5FiwqEk%2BsniFEE85K4176r9wNbK40uOesBC5n%2B7f4pSllRkVf0bZruDpHsydI7VZzhj3gLX%2BYs%2BX%2F%2Bsvm%2F0Isy1GdJhUjSjhZJ4Cvrs2fLWYoh18Y3vxdbmuu0ZS0SKR3dBessvUNQsiYZzbxASdJEKUsdPnNgAzppBTJveRVbv8shxMWV5jN7tbUJW9Im%2BEi%2FDVOUIpVCJQcmaC5Y1eJUGc6HY5J9obDQf419XP77N1pTFNDTFkT3jKOTosxZAHu2J9rQ3gTtWpYN%2BXfKPxOeBlc6N8h4QBB4Sm%2BfmLRlygErO0Giobo8tETxlyc03Jf%2Bzx469rpTMJm1jtIGOqUBWAO0tZYOxBIZ21ZUdnjwujz6kEGe6%2Fydpk85XOKFK2izQI8%2BM%2FLPJ8nMdi4N3k%2BGlr%2BJtOn5oUMVf6Gr46k2bGdev4RAbh6EGdQ0A7jR%2FUeoy21iZxVcr%2F%2BC7MBGSa850XQVEpx6GabZUwbujTx7nRFNRv58MOd8OAYhOXQm66DKM5oBee0uHHJVoy9WkxPefs9PAk48oAkkBL4akwX7IXYVq9I%2F&X-Amz-Signature=4a105ff284c20a69aefd4534e508c922aee6bced56b611db8ee2e295f39edbaf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
