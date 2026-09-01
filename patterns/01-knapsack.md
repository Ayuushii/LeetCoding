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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TCWQANTQ%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130638Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCzJVYU5yW9IGii33Hd9xe5GQSc2USNsYBKQ3TZwQYESwIgIZRf7haiptXTZFpOHMYZwUV7pYin03sH2gioJqEqy6sqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGN4EZL7bGBjcmy7JyrcA4e%2BoR8vCb5q9nMnpoC%2Fq5Tbiohi1daSTDxqTgoLXo%2FV%2Boy%2B%2F1CMrJdebM9dje3V2ZZ%2F5wqav8mbi8sdPSZ0HQ%2B5sMjAG3857U3OwK6%2B14BFad57V6WOGo3IfGNP4JkfVOP7MvNptZAw7TIO5Y1%2F321JSZNh1pJe0y1xMfiwAxeNUPi1%2BrR5s8UoXfUd91lRnqP%2FMLkQ7qZgWmwUMOlQpntvyNNQqBKbUSzOBf2%2BVeBKB78MWXbjd00yNdjng%2BNgNdSak8Pmvbg12eERZLaDnBxgiZTDtwy2AAXop5TRIBvo0GnFK%2F4jA3N8cI%2FajGAHx69a9lo1bKrfBtECbjKwUEFL7twIhxniubjPDnsd6%2FsKfEpXshLrpmPsvTf%2F3nn4VBHI5a8WOeWkxy6%2FgtH%2Bsd1Jxv%2F7ymImNSmQkU%2BZjbzL7zhpUj2PdBrbYigj93%2F%2FMmMXHw%2Bg5u75%2FKuydWs2ORSAa8EPHajzNwPVVq5GjGOXiDGbFSAAgP%2FGZ7N2uPn38rlqYkb8QwRhimSs8GCd%2Fmz0iCyIB3E8RM8HLrbpHhQiowNaDs5cpBJu8Y%2Fii5bRqdwBpxb4%2FymOfV6s4j7cubnxJOuN0GpyJq0IECtCkxQo1U3bdvo2QNh6h5k%2BML3q2tQGOqUB%2F32L0jVAa19NuKPkOsOk%2BCZfNoPEI%2FByV2PGxlvXkemFl69QoNIUc5DCimWiNIPUgZ5QjgF6ZloGBjpY%2FSg8xTi82Hr9N%2FuPHcMiQbyr3f7Mp5ky3tjMrbQEJoSWIOYrvIlRxvW3BWVgH4za5Tzov3qhta%2FupYDEXeDq4A55vUf3qRtP7nSMgApXoc2QIqCtIFUqf%2FscjhyfGOstKhf9uCHnfcN%2F&X-Amz-Signature=409c20f2021f79badb761724873971adf93cb5f711f9d3eedc1f068b9f66d5b0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TCWQANTQ%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130638Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCzJVYU5yW9IGii33Hd9xe5GQSc2USNsYBKQ3TZwQYESwIgIZRf7haiptXTZFpOHMYZwUV7pYin03sH2gioJqEqy6sqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGN4EZL7bGBjcmy7JyrcA4e%2BoR8vCb5q9nMnpoC%2Fq5Tbiohi1daSTDxqTgoLXo%2FV%2Boy%2B%2F1CMrJdebM9dje3V2ZZ%2F5wqav8mbi8sdPSZ0HQ%2B5sMjAG3857U3OwK6%2B14BFad57V6WOGo3IfGNP4JkfVOP7MvNptZAw7TIO5Y1%2F321JSZNh1pJe0y1xMfiwAxeNUPi1%2BrR5s8UoXfUd91lRnqP%2FMLkQ7qZgWmwUMOlQpntvyNNQqBKbUSzOBf2%2BVeBKB78MWXbjd00yNdjng%2BNgNdSak8Pmvbg12eERZLaDnBxgiZTDtwy2AAXop5TRIBvo0GnFK%2F4jA3N8cI%2FajGAHx69a9lo1bKrfBtECbjKwUEFL7twIhxniubjPDnsd6%2FsKfEpXshLrpmPsvTf%2F3nn4VBHI5a8WOeWkxy6%2FgtH%2Bsd1Jxv%2F7ymImNSmQkU%2BZjbzL7zhpUj2PdBrbYigj93%2F%2FMmMXHw%2Bg5u75%2FKuydWs2ORSAa8EPHajzNwPVVq5GjGOXiDGbFSAAgP%2FGZ7N2uPn38rlqYkb8QwRhimSs8GCd%2Fmz0iCyIB3E8RM8HLrbpHhQiowNaDs5cpBJu8Y%2Fii5bRqdwBpxb4%2FymOfV6s4j7cubnxJOuN0GpyJq0IECtCkxQo1U3bdvo2QNh6h5k%2BML3q2tQGOqUB%2F32L0jVAa19NuKPkOsOk%2BCZfNoPEI%2FByV2PGxlvXkemFl69QoNIUc5DCimWiNIPUgZ5QjgF6ZloGBjpY%2FSg8xTi82Hr9N%2FuPHcMiQbyr3f7Mp5ky3tjMrbQEJoSWIOYrvIlRxvW3BWVgH4za5Tzov3qhta%2FupYDEXeDq4A55vUf3qRtP7nSMgApXoc2QIqCtIFUqf%2FscjhyfGOstKhf9uCHnfcN%2F&X-Amz-Signature=3eb3154fab8dbda79498dd64e30e0b98aa18ffcc2500d2776231b025bcc73339&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TCWQANTQ%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130638Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCzJVYU5yW9IGii33Hd9xe5GQSc2USNsYBKQ3TZwQYESwIgIZRf7haiptXTZFpOHMYZwUV7pYin03sH2gioJqEqy6sqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGN4EZL7bGBjcmy7JyrcA4e%2BoR8vCb5q9nMnpoC%2Fq5Tbiohi1daSTDxqTgoLXo%2FV%2Boy%2B%2F1CMrJdebM9dje3V2ZZ%2F5wqav8mbi8sdPSZ0HQ%2B5sMjAG3857U3OwK6%2B14BFad57V6WOGo3IfGNP4JkfVOP7MvNptZAw7TIO5Y1%2F321JSZNh1pJe0y1xMfiwAxeNUPi1%2BrR5s8UoXfUd91lRnqP%2FMLkQ7qZgWmwUMOlQpntvyNNQqBKbUSzOBf2%2BVeBKB78MWXbjd00yNdjng%2BNgNdSak8Pmvbg12eERZLaDnBxgiZTDtwy2AAXop5TRIBvo0GnFK%2F4jA3N8cI%2FajGAHx69a9lo1bKrfBtECbjKwUEFL7twIhxniubjPDnsd6%2FsKfEpXshLrpmPsvTf%2F3nn4VBHI5a8WOeWkxy6%2FgtH%2Bsd1Jxv%2F7ymImNSmQkU%2BZjbzL7zhpUj2PdBrbYigj93%2F%2FMmMXHw%2Bg5u75%2FKuydWs2ORSAa8EPHajzNwPVVq5GjGOXiDGbFSAAgP%2FGZ7N2uPn38rlqYkb8QwRhimSs8GCd%2Fmz0iCyIB3E8RM8HLrbpHhQiowNaDs5cpBJu8Y%2Fii5bRqdwBpxb4%2FymOfV6s4j7cubnxJOuN0GpyJq0IECtCkxQo1U3bdvo2QNh6h5k%2BML3q2tQGOqUB%2F32L0jVAa19NuKPkOsOk%2BCZfNoPEI%2FByV2PGxlvXkemFl69QoNIUc5DCimWiNIPUgZ5QjgF6ZloGBjpY%2FSg8xTi82Hr9N%2FuPHcMiQbyr3f7Mp5ky3tjMrbQEJoSWIOYrvIlRxvW3BWVgH4za5Tzov3qhta%2FupYDEXeDq4A55vUf3qRtP7nSMgApXoc2QIqCtIFUqf%2FscjhyfGOstKhf9uCHnfcN%2F&X-Amz-Signature=570c9d70bba6eb7dbe8c7a7fa30b1779ed3582e84d8485e3c4730b8dc521e1b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XTJE4M3C%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130638Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDhntxKL4nVqJbv2fRPJvVtuTAjifGsiQXlEwaHK0lFkAIgZFxxyaaCydLlpQXUvnHyEoRa3a6ETfx1MpuFCJ%2F82hgqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAruSMI4cdzOOoCqOSrcAzd%2FCSariW%2BhgisaUXjsiveMYbeu9XaqrT77sEqXNaDgFmT9FiKaDl9U%2FfCIgvTUWIEgmFiln9B5QPpSByo%2BZjtbCOKXEYIpKnuoB5u1TGphAZ6uVODeOZgR8PKD4N%2B9Q8OcUqomX3RYKbl1HCjFG9v9eINt18VeFQMcFjfKK4yRO1%2F%2FLq9vNHM77IZH0ohbkDUnMNFJ4Pv5rTgqTUGHaJmIksE4uC9GYGC1ucv8YuiSEfr0GrqyaZcDwDJb%2BjEm9IOb9m0sj87677lNardZow7UXOAE2E7v3NNnrPZkjzYZcDx2MoTL8fzw7loN%2BrCHrSGni4URzfNI%2Fenm2H92RcsRS1%2BL%2BcBGu2JtK8nLFkc35A35MzMPBKePnz5s8CpXkRcVCFl0H%2FRH8DpyfgLX8p7pRDaQC4dfJJvpNvAnLC59TfCA41cIwfATCHG6CM76FstDdVDzUNIGB9NGMIOvVX2KJEoIaArqsBpjDw6hz7gVI%2B3Xd1%2BuzmDEpGWLviPN%2FSsfFquttoBx%2FJow8sLwQXE%2B%2B5isZmsiHn03Pozck8prEtOm6abPsUAe%2FR3ehW%2FD%2F%2Fn2abh757eqvYwmdqSjv%2FXMkg2LDWdG3V2bG3pmVM0WA9KdaD9WLLu1RiydMPjq2tQGOqUBledbxG8Pc3VIcMPnGw48AighgBABS6YKX1%2FjDTaTWmQBWDwuWCL46ATwIN2kW6F12zbOB7B%2BU0zE8bATmbQR0LiMXbWyT8C61oamd2ThW5ycdWOf2jU6tBhkgyOUq7ZERNvcv7OZr4gjN1%2BXhOb%2BEPbdfujIbLat%2FvjgKOn%2FN0resL2CLiYTbERNtRNmKnIPzOvbu5bYP17FnJB2g5q7Si638Wx%2F&X-Amz-Signature=e639cc921ccab786ad971e10749c4461240caa3bec8ef5e7878cc7d3768ad098&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XTJE4M3C%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130638Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDhntxKL4nVqJbv2fRPJvVtuTAjifGsiQXlEwaHK0lFkAIgZFxxyaaCydLlpQXUvnHyEoRa3a6ETfx1MpuFCJ%2F82hgqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAruSMI4cdzOOoCqOSrcAzd%2FCSariW%2BhgisaUXjsiveMYbeu9XaqrT77sEqXNaDgFmT9FiKaDl9U%2FfCIgvTUWIEgmFiln9B5QPpSByo%2BZjtbCOKXEYIpKnuoB5u1TGphAZ6uVODeOZgR8PKD4N%2B9Q8OcUqomX3RYKbl1HCjFG9v9eINt18VeFQMcFjfKK4yRO1%2F%2FLq9vNHM77IZH0ohbkDUnMNFJ4Pv5rTgqTUGHaJmIksE4uC9GYGC1ucv8YuiSEfr0GrqyaZcDwDJb%2BjEm9IOb9m0sj87677lNardZow7UXOAE2E7v3NNnrPZkjzYZcDx2MoTL8fzw7loN%2BrCHrSGni4URzfNI%2Fenm2H92RcsRS1%2BL%2BcBGu2JtK8nLFkc35A35MzMPBKePnz5s8CpXkRcVCFl0H%2FRH8DpyfgLX8p7pRDaQC4dfJJvpNvAnLC59TfCA41cIwfATCHG6CM76FstDdVDzUNIGB9NGMIOvVX2KJEoIaArqsBpjDw6hz7gVI%2B3Xd1%2BuzmDEpGWLviPN%2FSsfFquttoBx%2FJow8sLwQXE%2B%2B5isZmsiHn03Pozck8prEtOm6abPsUAe%2FR3ehW%2FD%2F%2Fn2abh757eqvYwmdqSjv%2FXMkg2LDWdG3V2bG3pmVM0WA9KdaD9WLLu1RiydMPjq2tQGOqUBledbxG8Pc3VIcMPnGw48AighgBABS6YKX1%2FjDTaTWmQBWDwuWCL46ATwIN2kW6F12zbOB7B%2BU0zE8bATmbQR0LiMXbWyT8C61oamd2ThW5ycdWOf2jU6tBhkgyOUq7ZERNvcv7OZr4gjN1%2BXhOb%2BEPbdfujIbLat%2FvjgKOn%2FN0resL2CLiYTbERNtRNmKnIPzOvbu5bYP17FnJB2g5q7Si638Wx%2F&X-Amz-Signature=f9705ddc2dc5c75076fb1771fc27378141a9e849a137ec8e4573446087a77e99&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XTJE4M3C%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130638Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDhntxKL4nVqJbv2fRPJvVtuTAjifGsiQXlEwaHK0lFkAIgZFxxyaaCydLlpQXUvnHyEoRa3a6ETfx1MpuFCJ%2F82hgqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAruSMI4cdzOOoCqOSrcAzd%2FCSariW%2BhgisaUXjsiveMYbeu9XaqrT77sEqXNaDgFmT9FiKaDl9U%2FfCIgvTUWIEgmFiln9B5QPpSByo%2BZjtbCOKXEYIpKnuoB5u1TGphAZ6uVODeOZgR8PKD4N%2B9Q8OcUqomX3RYKbl1HCjFG9v9eINt18VeFQMcFjfKK4yRO1%2F%2FLq9vNHM77IZH0ohbkDUnMNFJ4Pv5rTgqTUGHaJmIksE4uC9GYGC1ucv8YuiSEfr0GrqyaZcDwDJb%2BjEm9IOb9m0sj87677lNardZow7UXOAE2E7v3NNnrPZkjzYZcDx2MoTL8fzw7loN%2BrCHrSGni4URzfNI%2Fenm2H92RcsRS1%2BL%2BcBGu2JtK8nLFkc35A35MzMPBKePnz5s8CpXkRcVCFl0H%2FRH8DpyfgLX8p7pRDaQC4dfJJvpNvAnLC59TfCA41cIwfATCHG6CM76FstDdVDzUNIGB9NGMIOvVX2KJEoIaArqsBpjDw6hz7gVI%2B3Xd1%2BuzmDEpGWLviPN%2FSsfFquttoBx%2FJow8sLwQXE%2B%2B5isZmsiHn03Pozck8prEtOm6abPsUAe%2FR3ehW%2FD%2F%2Fn2abh757eqvYwmdqSjv%2FXMkg2LDWdG3V2bG3pmVM0WA9KdaD9WLLu1RiydMPjq2tQGOqUBledbxG8Pc3VIcMPnGw48AighgBABS6YKX1%2FjDTaTWmQBWDwuWCL46ATwIN2kW6F12zbOB7B%2BU0zE8bATmbQR0LiMXbWyT8C61oamd2ThW5ycdWOf2jU6tBhkgyOUq7ZERNvcv7OZr4gjN1%2BXhOb%2BEPbdfujIbLat%2FvjgKOn%2FN0resL2CLiYTbERNtRNmKnIPzOvbu5bYP17FnJB2g5q7Si638Wx%2F&X-Amz-Signature=5ce4644b572cbeec5e958db6cd226a8d5724ba386a301f4f5231532ca7020619&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XTJE4M3C%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130638Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDhntxKL4nVqJbv2fRPJvVtuTAjifGsiQXlEwaHK0lFkAIgZFxxyaaCydLlpQXUvnHyEoRa3a6ETfx1MpuFCJ%2F82hgqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAruSMI4cdzOOoCqOSrcAzd%2FCSariW%2BhgisaUXjsiveMYbeu9XaqrT77sEqXNaDgFmT9FiKaDl9U%2FfCIgvTUWIEgmFiln9B5QPpSByo%2BZjtbCOKXEYIpKnuoB5u1TGphAZ6uVODeOZgR8PKD4N%2B9Q8OcUqomX3RYKbl1HCjFG9v9eINt18VeFQMcFjfKK4yRO1%2F%2FLq9vNHM77IZH0ohbkDUnMNFJ4Pv5rTgqTUGHaJmIksE4uC9GYGC1ucv8YuiSEfr0GrqyaZcDwDJb%2BjEm9IOb9m0sj87677lNardZow7UXOAE2E7v3NNnrPZkjzYZcDx2MoTL8fzw7loN%2BrCHrSGni4URzfNI%2Fenm2H92RcsRS1%2BL%2BcBGu2JtK8nLFkc35A35MzMPBKePnz5s8CpXkRcVCFl0H%2FRH8DpyfgLX8p7pRDaQC4dfJJvpNvAnLC59TfCA41cIwfATCHG6CM76FstDdVDzUNIGB9NGMIOvVX2KJEoIaArqsBpjDw6hz7gVI%2B3Xd1%2BuzmDEpGWLviPN%2FSsfFquttoBx%2FJow8sLwQXE%2B%2B5isZmsiHn03Pozck8prEtOm6abPsUAe%2FR3ehW%2FD%2F%2Fn2abh757eqvYwmdqSjv%2FXMkg2LDWdG3V2bG3pmVM0WA9KdaD9WLLu1RiydMPjq2tQGOqUBledbxG8Pc3VIcMPnGw48AighgBABS6YKX1%2FjDTaTWmQBWDwuWCL46ATwIN2kW6F12zbOB7B%2BU0zE8bATmbQR0LiMXbWyT8C61oamd2ThW5ycdWOf2jU6tBhkgyOUq7ZERNvcv7OZr4gjN1%2BXhOb%2BEPbdfujIbLat%2FvjgKOn%2FN0resL2CLiYTbERNtRNmKnIPzOvbu5bYP17FnJB2g5q7Si638Wx%2F&X-Amz-Signature=557727f2353a04adf36210ac278ec8e8618e0ecfdfee97145de7a5964570faa9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RKQW6E3Z%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130639Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC%2BqmGCl1hf9rAO99PYE6yCfEfcq490Yn%2B0feq5l%2ByDUQIgRih8scE6P5bx3EEW9FLXXpZdAWQUJj42aaXWWngg%2BG8qiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMGuhSF0e%2FQViGI%2BDircA2hjkeBoKuF9QDMB87XlLw7qHlpMJFJ5tCoWE828uzHlIaP2POm82KxOVF1aqE0oEiURquf%2FT8tCbjhW48Z2ZgevySlqCXK%2F%2FzL7Ef0w0X5MElVSn7KfM%2FH4l1P2nszvfVPNmphpAtn2tn7Gc%2FtMc4ZMPoOhIcqHkd9VhvYthsFuOtWMPKmw5Jd1ciU%2BQssevf3tdSB8D2cLzpFfSuRe7PcCkQ1wXMzMIoFP%2Bm9OC990w3l79%2BXd%2Bm7YE4b%2FSil7bFFcAVYuQbNr2ZXzanAiRTNxAjrQi5GMbfXioPENHjX2gpwEb0Pi4%2BCSJSCZr4eB9E2Y%2BmS%2FqBdVpR5ihfh5SyKO8D69aUW8kl1jFYgcnrfwqu0LL5RpJE1bfoGpRrNj1IkZ3JXy0gdamXaod2RRalzbONB%2BYQTgYIaF3%2BzUJjmu4WcCY7ASONbY%2BhI5iuiTDs2P14bNd%2BR1RwNV7ymIPB%2FCxx3Nv7YnjB7CAAC24pkGtRlxWsPdd7Qmxa9omqWRD8CjT9yrfakU6FofrR3uhYgAljXjKGqxXuX8ddPZbvpVPHdH5pvff3TMB0clPOsPa47WR9mY7L%2BDIhm%2BuAKlN117IPv5u%2BACYH5Qd0N3yiuOI2c5I2jiFqsyUzrPMLnq2tQGOqUBWivN3%2BH7jzCq0G78ny%2FMbMMQTXc6bcuS0SLVWhLJJ%2Fta1JJ3TYLv5oVQql%2FbbyRu6KDJ0I6Gqb6SgUjO%2FSivwFY%2Fv0J2egwpk1MXmJPY4RZCvVrEaJhjFO%2F2E%2BGUTw37nGxrS4aGi7KX2xNI6kHDmsThILdtGR6DyeKAeMQtRMn%2FvRKsdecwXN%2Bi6eFWPS0eYO2tg6ZJtdXoPe3QUqDsfd%2FEuKKf&X-Amz-Signature=524948686f4831a24e827a48616dd9899399b86db98862e3c5411ae876f8fc66&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TPE3PBKE%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130639Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGQzbmtYwSp2FRD3ZTVz102JttFBYqTjw3OSLODRZ4dLAiAaQHLZ44m%2F3aK4PHMqT5gnGQ1WH1uyxo9fJ8fWQjQWWiqIBAis%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMU2IXfswc1e%2FL0YknKtwDsQqkKBSfJLuAr1t%2F5mm08cGfMKVvObValolTAQFErO3yrUtfS7T9eZT8rrmHe%2FNv8LpJadFgqLLL9IsxmLozMbjePH%2FVVQdQCAXAH%2FXWKfTLhy1hK7UhuV1L65rRurnxmS%2F42xWQ%2Bd4g3VgWux4njNxbYvg9YC71sRbkWNnTZHf6UMVS%2B7kvD%2BCjXlw8bjGsqv4aMvTyQkFFGYRcGY5XQW5xFDLwevghRbAkl%2BBbilJvGMQQkASOqU94wBSM2GoPBBuFsN3cUI38La58%2Fe64OcuTXPUeLcB4o4xzSTIo9p2EVCVkQuCtD%2FX7KeOPEoPxIcY2j66A9sUGnlncgHe4EQK%2F7I4jEUDqktvs5msk5bnQip5T7BBXv0UqyLyDKdv8AKeSbGNiN1KVsYBxwBaJCBHg6rh2Tvpud%2B%2FkN%2Bi26xeXgR6OBZj12bOHjtJtXSXj6VnO%2B%2FFrUe6wsKjSagBq8pzNgiGBPLQkaCe3Y2Sdir5cGFrTRvc5qWKok5SSA6m26IQgUoWD13WOMEk%2FnmpikQ6xdWn%2BkrzjFwCc02ast%2BhZ%2BCc7sh6GZwjRh0%2Br0Ltmb%2BBD9N9vfqwX1FD%2BwsE7bkcNt1WEvv4T9e7fLkzDY%2Fia05r4n1J9FuaYoOAwuuna1AY6pgGYTtFU8xn9PVpAz0gtXQ%2BljjW19DvJBCgloMS0IHOx0yDCJmLFbSks%2BThuqPYE76gHWNlj2zRTlUjrfwSgwGEXwixJatuNHRn3hXqvHsi8bY%2BAS4Giifl9aiYv%2Brvu6xTjawBw8mJUoUf6dBJXzIjU4UpDh86aEOsSaphDm2knZB0bfiVyYDy5eVZT6cx%2BvzBlRXQ%2F0dagTBW0mTihvvhxNjuPh4%2Fh&X-Amz-Signature=92a3834e1025d2fc3972ce9e6122e2bdf09f2b6dc338923531bea5299192061d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TPE3PBKE%2F20260901%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260901T130639Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGQzbmtYwSp2FRD3ZTVz102JttFBYqTjw3OSLODRZ4dLAiAaQHLZ44m%2F3aK4PHMqT5gnGQ1WH1uyxo9fJ8fWQjQWWiqIBAis%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMU2IXfswc1e%2FL0YknKtwDsQqkKBSfJLuAr1t%2F5mm08cGfMKVvObValolTAQFErO3yrUtfS7T9eZT8rrmHe%2FNv8LpJadFgqLLL9IsxmLozMbjePH%2FVVQdQCAXAH%2FXWKfTLhy1hK7UhuV1L65rRurnxmS%2F42xWQ%2Bd4g3VgWux4njNxbYvg9YC71sRbkWNnTZHf6UMVS%2B7kvD%2BCjXlw8bjGsqv4aMvTyQkFFGYRcGY5XQW5xFDLwevghRbAkl%2BBbilJvGMQQkASOqU94wBSM2GoPBBuFsN3cUI38La58%2Fe64OcuTXPUeLcB4o4xzSTIo9p2EVCVkQuCtD%2FX7KeOPEoPxIcY2j66A9sUGnlncgHe4EQK%2F7I4jEUDqktvs5msk5bnQip5T7BBXv0UqyLyDKdv8AKeSbGNiN1KVsYBxwBaJCBHg6rh2Tvpud%2B%2FkN%2Bi26xeXgR6OBZj12bOHjtJtXSXj6VnO%2B%2FFrUe6wsKjSagBq8pzNgiGBPLQkaCe3Y2Sdir5cGFrTRvc5qWKok5SSA6m26IQgUoWD13WOMEk%2FnmpikQ6xdWn%2BkrzjFwCc02ast%2BhZ%2BCc7sh6GZwjRh0%2Br0Ltmb%2BBD9N9vfqwX1FD%2BwsE7bkcNt1WEvv4T9e7fLkzDY%2Fia05r4n1J9FuaYoOAwuuna1AY6pgGYTtFU8xn9PVpAz0gtXQ%2BljjW19DvJBCgloMS0IHOx0yDCJmLFbSks%2BThuqPYE76gHWNlj2zRTlUjrfwSgwGEXwixJatuNHRn3hXqvHsi8bY%2BAS4Giifl9aiYv%2Brvu6xTjawBw8mJUoUf6dBJXzIjU4UpDh86aEOsSaphDm2knZB0bfiVyYDy5eVZT6cx%2BvzBlRXQ%2F0dagTBW0mTihvvhxNjuPh4%2Fh&X-Amz-Signature=e25f6dcb7a71db3b5a1eb934e6d2c4f9ad48c45902e13bbb615be825f44e163d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
