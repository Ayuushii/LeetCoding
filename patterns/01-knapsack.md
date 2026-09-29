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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKZ6IM4W%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIERzN%2F0uyboBSs7htXK%2FYYljzKWX5%2Bsjuw7CMZT62DCeAiEA3zQRF6nBBFvUZ3cpI6f%2BhLZWrauI0KruS7O6gut5zPMq%2FwMITxAAGgw2Mzc0MjMxODM4MDUiDOLaw2HCsilKxHXkFircA4%2ByCkW%2F8ov%2Bi8ilirrxjy0SpSDubC7R18E%2Fk3O1%2BD76ehuOuOpL3r8Zi%2FDaTc4Jphkk4af0MdgRPUeSl%2BxOdyKqpOV7HZtbKtMNZiV8elMLqsdYf2VX2JLZykxfGvcGPPm6cXJjr9tVAjS4DPk99Ah%2FrhbHE2kD3f0LBMDJQq%2FpTOdjMhZqijxWeSqMPQiFt08bQpY9DxiKYHyCJljGd33iX%2FRuuj3FrS5pT%2BSu00w4M6iHJHBkjK%2BvnxolY7HE%2BUh4d%2F5z7iB0UtGvr%2F3DEH2uH2dAttPK%2B1qbkEfZLUUBEjbDFFq5nB%2F%2FlqJKQ8TZx4iGGPHjZAY1S%2B3l9bsM1HM3GKhK3DaABOf3PDZQpvJ4Hw4BVNaSKE0e8F%2BhECqSIOEEUAmbKK8buDyx4uMw0gtsfP4qmwRUdrVoUiOAbElZK17v74Z9kjQeQMbRvtTOYATWoYI76LjGT%2FyNcDdE1xnzzwYz%2BU3Z7%2FP%2FW8XzbfaCuDnaKVxHeDeS8eIIyc5rqrR0MWMImWuNS80V4uvPj%2B2HoVSvfO4Ig3K%2FA%2ByyDrHOAwYdrqPW4qt9GKLdTEBGx55rfTmcHzpJx6E8LKOxxweczBkeuGCyYM3hA%2Fi6N0v%2F%2Ff9UX8g0CU86y7g5ML%2BJ79UGOqUBNAjmeCUNBllIZgMbZbhcXyfxTHndWCdQRNLc%2BTwixAssNcyzO%2BH3ksV1%2FT0qvqgaHak%2FSrSU9%2Bnb0H2e6u4YTfRi79vTVWsVv%2BrFWyEbd1zlXheBgknL2igp%2Bv7SOMAySfgy4bwPXlDKFdXNclv1A3adXy0Jvk5%2BvFyad6krOfYOzXd3JQoPrCmzdrRTEVLLNB7iNSREuhtptfyGXV6xxURi9zbf&X-Amz-Signature=f4e2de104af3e0a88bc70450aad6c3caa88bbd3244a88077b50ec36a134140b5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKZ6IM4W%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIERzN%2F0uyboBSs7htXK%2FYYljzKWX5%2Bsjuw7CMZT62DCeAiEA3zQRF6nBBFvUZ3cpI6f%2BhLZWrauI0KruS7O6gut5zPMq%2FwMITxAAGgw2Mzc0MjMxODM4MDUiDOLaw2HCsilKxHXkFircA4%2ByCkW%2F8ov%2Bi8ilirrxjy0SpSDubC7R18E%2Fk3O1%2BD76ehuOuOpL3r8Zi%2FDaTc4Jphkk4af0MdgRPUeSl%2BxOdyKqpOV7HZtbKtMNZiV8elMLqsdYf2VX2JLZykxfGvcGPPm6cXJjr9tVAjS4DPk99Ah%2FrhbHE2kD3f0LBMDJQq%2FpTOdjMhZqijxWeSqMPQiFt08bQpY9DxiKYHyCJljGd33iX%2FRuuj3FrS5pT%2BSu00w4M6iHJHBkjK%2BvnxolY7HE%2BUh4d%2F5z7iB0UtGvr%2F3DEH2uH2dAttPK%2B1qbkEfZLUUBEjbDFFq5nB%2F%2FlqJKQ8TZx4iGGPHjZAY1S%2B3l9bsM1HM3GKhK3DaABOf3PDZQpvJ4Hw4BVNaSKE0e8F%2BhECqSIOEEUAmbKK8buDyx4uMw0gtsfP4qmwRUdrVoUiOAbElZK17v74Z9kjQeQMbRvtTOYATWoYI76LjGT%2FyNcDdE1xnzzwYz%2BU3Z7%2FP%2FW8XzbfaCuDnaKVxHeDeS8eIIyc5rqrR0MWMImWuNS80V4uvPj%2B2HoVSvfO4Ig3K%2FA%2ByyDrHOAwYdrqPW4qt9GKLdTEBGx55rfTmcHzpJx6E8LKOxxweczBkeuGCyYM3hA%2Fi6N0v%2F%2Ff9UX8g0CU86y7g5ML%2BJ79UGOqUBNAjmeCUNBllIZgMbZbhcXyfxTHndWCdQRNLc%2BTwixAssNcyzO%2BH3ksV1%2FT0qvqgaHak%2FSrSU9%2Bnb0H2e6u4YTfRi79vTVWsVv%2BrFWyEbd1zlXheBgknL2igp%2Bv7SOMAySfgy4bwPXlDKFdXNclv1A3adXy0Jvk5%2BvFyad6krOfYOzXd3JQoPrCmzdrRTEVLLNB7iNSREuhtptfyGXV6xxURi9zbf&X-Amz-Signature=9184c7812a2e42742491f60b10e675d7a429c449265bc55e823a9d5249300d4d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKZ6IM4W%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIERzN%2F0uyboBSs7htXK%2FYYljzKWX5%2Bsjuw7CMZT62DCeAiEA3zQRF6nBBFvUZ3cpI6f%2BhLZWrauI0KruS7O6gut5zPMq%2FwMITxAAGgw2Mzc0MjMxODM4MDUiDOLaw2HCsilKxHXkFircA4%2ByCkW%2F8ov%2Bi8ilirrxjy0SpSDubC7R18E%2Fk3O1%2BD76ehuOuOpL3r8Zi%2FDaTc4Jphkk4af0MdgRPUeSl%2BxOdyKqpOV7HZtbKtMNZiV8elMLqsdYf2VX2JLZykxfGvcGPPm6cXJjr9tVAjS4DPk99Ah%2FrhbHE2kD3f0LBMDJQq%2FpTOdjMhZqijxWeSqMPQiFt08bQpY9DxiKYHyCJljGd33iX%2FRuuj3FrS5pT%2BSu00w4M6iHJHBkjK%2BvnxolY7HE%2BUh4d%2F5z7iB0UtGvr%2F3DEH2uH2dAttPK%2B1qbkEfZLUUBEjbDFFq5nB%2F%2FlqJKQ8TZx4iGGPHjZAY1S%2B3l9bsM1HM3GKhK3DaABOf3PDZQpvJ4Hw4BVNaSKE0e8F%2BhECqSIOEEUAmbKK8buDyx4uMw0gtsfP4qmwRUdrVoUiOAbElZK17v74Z9kjQeQMbRvtTOYATWoYI76LjGT%2FyNcDdE1xnzzwYz%2BU3Z7%2FP%2FW8XzbfaCuDnaKVxHeDeS8eIIyc5rqrR0MWMImWuNS80V4uvPj%2B2HoVSvfO4Ig3K%2FA%2ByyDrHOAwYdrqPW4qt9GKLdTEBGx55rfTmcHzpJx6E8LKOxxweczBkeuGCyYM3hA%2Fi6N0v%2F%2Ff9UX8g0CU86y7g5ML%2BJ79UGOqUBNAjmeCUNBllIZgMbZbhcXyfxTHndWCdQRNLc%2BTwixAssNcyzO%2BH3ksV1%2FT0qvqgaHak%2FSrSU9%2Bnb0H2e6u4YTfRi79vTVWsVv%2BrFWyEbd1zlXheBgknL2igp%2Bv7SOMAySfgy4bwPXlDKFdXNclv1A3adXy0Jvk5%2BvFyad6krOfYOzXd3JQoPrCmzdrRTEVLLNB7iNSREuhtptfyGXV6xxURi9zbf&X-Amz-Signature=f6f49df19fd586bf037082a393a97354bf8dd09c77ac6e43addf1c91cbcd8896&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S5C5JP2S%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDGDubW%2BmBya4iVnQ%2Bn5O%2BQvkzTme6cGq%2BB5t5e3uhbgAiBO36yN5VtZbHfBMv3P4rvhCIU%2BExk7HdrUDzyHaZuodir%2FAwhPEAAaDDYzNzQyMzE4MzgwNSIMec1a3CiAnyhXidVmKtwDBHi3JrXuNYK8Dfl5CljrGS%2FwazxmuLB%2FJALbagjPaQFSdiJvOGisOdlsQdTDC5UwZmfa%2BNgFCaRTTpKHr18qrBGzpric8Lqc2aJLZv%2BMTcw059qzS6I%2BmMFsn7Ojiz%2BrzZAnklUOQP9cBE6fxYEIJFYNop%2BDo6QrZURSbELkg%2BRJKIIynjzkoe15uuIioFSQQGVyJ%2FplAEW8VuLycGRswWAHo1KTxWOEeJhpARLZbMJbkGoAF1exa7jzb1YIaQ1CAgfrc6bEs27LCZepjfkrG%2BBaek9U7AXvQsS9MRrkQy2r4LegBJ35myDtPuF3XsHRk0gUOz%2Fqw4mBUyh%2F5X3xdjN%2FhdhOqr1%2BKJ7C%2B7cvOeHM600Z0I6mHPsvTFn%2FgpYfkOi7yHlTqdYcITBW4qJhWU8SlWZnRSHKsO58x51EWsEnOLzSpgUpwuFyC%2FaTXlqjltQhDXhWJukJ7Ux%2BJgcylRRI7SZoSzkslClorCbGES8AvenhMx7df1Ji6BmEOgU8hFkl4x0J%2FoGHOlG%2FI10JroNmxaRGUCc1EMVmntCDSs8CAG3mSDHwjvGGLfy9kM75thNMjPC8Wjk%2BA6vzvGC5WRS0mmuXhi8VqFGK6rL3JFdFzXEHDHchgP%2FmEDUwhYvv1QY6pgFKB0dTLtahyW9NH7vxLJ0ZhBFXaUoz%2FJFuZiLVpc1mougE7MFxtXWEFHXzb4K3zxc7SgnSJpFp4D0dJbRGSmiO7kA%2BuFvXFAfYjSiSPukAdOTTxYUvmawVCoiZHACTxIEokp2GvhQJ9KuyhL8F0KwjgcK6Ngrs5E9hiAQIN2z1QJ%2BtGjepApKdn631Og%2FrNLzMMR5Le7j17lnJQdkKar0176Y8S2uP&X-Amz-Signature=a66e66b8a9fa6052b08f566ee22f6844112ce79ecb3f5159b419a1a4fbb8e5bb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S5C5JP2S%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDGDubW%2BmBya4iVnQ%2Bn5O%2BQvkzTme6cGq%2BB5t5e3uhbgAiBO36yN5VtZbHfBMv3P4rvhCIU%2BExk7HdrUDzyHaZuodir%2FAwhPEAAaDDYzNzQyMzE4MzgwNSIMec1a3CiAnyhXidVmKtwDBHi3JrXuNYK8Dfl5CljrGS%2FwazxmuLB%2FJALbagjPaQFSdiJvOGisOdlsQdTDC5UwZmfa%2BNgFCaRTTpKHr18qrBGzpric8Lqc2aJLZv%2BMTcw059qzS6I%2BmMFsn7Ojiz%2BrzZAnklUOQP9cBE6fxYEIJFYNop%2BDo6QrZURSbELkg%2BRJKIIynjzkoe15uuIioFSQQGVyJ%2FplAEW8VuLycGRswWAHo1KTxWOEeJhpARLZbMJbkGoAF1exa7jzb1YIaQ1CAgfrc6bEs27LCZepjfkrG%2BBaek9U7AXvQsS9MRrkQy2r4LegBJ35myDtPuF3XsHRk0gUOz%2Fqw4mBUyh%2F5X3xdjN%2FhdhOqr1%2BKJ7C%2B7cvOeHM600Z0I6mHPsvTFn%2FgpYfkOi7yHlTqdYcITBW4qJhWU8SlWZnRSHKsO58x51EWsEnOLzSpgUpwuFyC%2FaTXlqjltQhDXhWJukJ7Ux%2BJgcylRRI7SZoSzkslClorCbGES8AvenhMx7df1Ji6BmEOgU8hFkl4x0J%2FoGHOlG%2FI10JroNmxaRGUCc1EMVmntCDSs8CAG3mSDHwjvGGLfy9kM75thNMjPC8Wjk%2BA6vzvGC5WRS0mmuXhi8VqFGK6rL3JFdFzXEHDHchgP%2FmEDUwhYvv1QY6pgFKB0dTLtahyW9NH7vxLJ0ZhBFXaUoz%2FJFuZiLVpc1mougE7MFxtXWEFHXzb4K3zxc7SgnSJpFp4D0dJbRGSmiO7kA%2BuFvXFAfYjSiSPukAdOTTxYUvmawVCoiZHACTxIEokp2GvhQJ9KuyhL8F0KwjgcK6Ngrs5E9hiAQIN2z1QJ%2BtGjepApKdn631Og%2FrNLzMMR5Le7j17lnJQdkKar0176Y8S2uP&X-Amz-Signature=0901829453a1c332e7674d88cb63762a89c5d0c15df531c9b813cb90d7abb6fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S5C5JP2S%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDGDubW%2BmBya4iVnQ%2Bn5O%2BQvkzTme6cGq%2BB5t5e3uhbgAiBO36yN5VtZbHfBMv3P4rvhCIU%2BExk7HdrUDzyHaZuodir%2FAwhPEAAaDDYzNzQyMzE4MzgwNSIMec1a3CiAnyhXidVmKtwDBHi3JrXuNYK8Dfl5CljrGS%2FwazxmuLB%2FJALbagjPaQFSdiJvOGisOdlsQdTDC5UwZmfa%2BNgFCaRTTpKHr18qrBGzpric8Lqc2aJLZv%2BMTcw059qzS6I%2BmMFsn7Ojiz%2BrzZAnklUOQP9cBE6fxYEIJFYNop%2BDo6QrZURSbELkg%2BRJKIIynjzkoe15uuIioFSQQGVyJ%2FplAEW8VuLycGRswWAHo1KTxWOEeJhpARLZbMJbkGoAF1exa7jzb1YIaQ1CAgfrc6bEs27LCZepjfkrG%2BBaek9U7AXvQsS9MRrkQy2r4LegBJ35myDtPuF3XsHRk0gUOz%2Fqw4mBUyh%2F5X3xdjN%2FhdhOqr1%2BKJ7C%2B7cvOeHM600Z0I6mHPsvTFn%2FgpYfkOi7yHlTqdYcITBW4qJhWU8SlWZnRSHKsO58x51EWsEnOLzSpgUpwuFyC%2FaTXlqjltQhDXhWJukJ7Ux%2BJgcylRRI7SZoSzkslClorCbGES8AvenhMx7df1Ji6BmEOgU8hFkl4x0J%2FoGHOlG%2FI10JroNmxaRGUCc1EMVmntCDSs8CAG3mSDHwjvGGLfy9kM75thNMjPC8Wjk%2BA6vzvGC5WRS0mmuXhi8VqFGK6rL3JFdFzXEHDHchgP%2FmEDUwhYvv1QY6pgFKB0dTLtahyW9NH7vxLJ0ZhBFXaUoz%2FJFuZiLVpc1mougE7MFxtXWEFHXzb4K3zxc7SgnSJpFp4D0dJbRGSmiO7kA%2BuFvXFAfYjSiSPukAdOTTxYUvmawVCoiZHACTxIEokp2GvhQJ9KuyhL8F0KwjgcK6Ngrs5E9hiAQIN2z1QJ%2BtGjepApKdn631Og%2FrNLzMMR5Le7j17lnJQdkKar0176Y8S2uP&X-Amz-Signature=c98051a02976cf8cecf5822e298d48b7adb2f97a2f243496478101983a5fe3f4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S5C5JP2S%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDGDubW%2BmBya4iVnQ%2Bn5O%2BQvkzTme6cGq%2BB5t5e3uhbgAiBO36yN5VtZbHfBMv3P4rvhCIU%2BExk7HdrUDzyHaZuodir%2FAwhPEAAaDDYzNzQyMzE4MzgwNSIMec1a3CiAnyhXidVmKtwDBHi3JrXuNYK8Dfl5CljrGS%2FwazxmuLB%2FJALbagjPaQFSdiJvOGisOdlsQdTDC5UwZmfa%2BNgFCaRTTpKHr18qrBGzpric8Lqc2aJLZv%2BMTcw059qzS6I%2BmMFsn7Ojiz%2BrzZAnklUOQP9cBE6fxYEIJFYNop%2BDo6QrZURSbELkg%2BRJKIIynjzkoe15uuIioFSQQGVyJ%2FplAEW8VuLycGRswWAHo1KTxWOEeJhpARLZbMJbkGoAF1exa7jzb1YIaQ1CAgfrc6bEs27LCZepjfkrG%2BBaek9U7AXvQsS9MRrkQy2r4LegBJ35myDtPuF3XsHRk0gUOz%2Fqw4mBUyh%2F5X3xdjN%2FhdhOqr1%2BKJ7C%2B7cvOeHM600Z0I6mHPsvTFn%2FgpYfkOi7yHlTqdYcITBW4qJhWU8SlWZnRSHKsO58x51EWsEnOLzSpgUpwuFyC%2FaTXlqjltQhDXhWJukJ7Ux%2BJgcylRRI7SZoSzkslClorCbGES8AvenhMx7df1Ji6BmEOgU8hFkl4x0J%2FoGHOlG%2FI10JroNmxaRGUCc1EMVmntCDSs8CAG3mSDHwjvGGLfy9kM75thNMjPC8Wjk%2BA6vzvGC5WRS0mmuXhi8VqFGK6rL3JFdFzXEHDHchgP%2FmEDUwhYvv1QY6pgFKB0dTLtahyW9NH7vxLJ0ZhBFXaUoz%2FJFuZiLVpc1mougE7MFxtXWEFHXzb4K3zxc7SgnSJpFp4D0dJbRGSmiO7kA%2BuFvXFAfYjSiSPukAdOTTxYUvmawVCoiZHACTxIEokp2GvhQJ9KuyhL8F0KwjgcK6Ngrs5E9hiAQIN2z1QJ%2BtGjepApKdn631Og%2FrNLzMMR5Le7j17lnJQdkKar0176Y8S2uP&X-Amz-Signature=9c742db240ea19b9ae837444a13c34ad1f33e822626049111986f5198cfac986&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGE2REPP%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCu0KVFCvohd%2BjGZA0LUT7qtpwaogXreZdRfiIJAZ8vngIgAIu%2FNZm34vWJimbZxsiO6BqyUwiP7JVJ82ng866gByAq%2FwMITxAAGgw2Mzc0MjMxODM4MDUiDAIIbDHY8BvSNK4geSrcAycRn2IN8iX77GDEC87i%2BQ0LsfXWh5OU%2B%2BREVCxf5HYmtnHYlD65uV%2Fjaz%2F%2B8bjiNU%2FnY6XCxwOxW7k4AX4xoP6hFZKQFUnzcHHJJrAVrycJIYgX7U0vwwhM6SAMKakoccoE5l5aLr40QrvVT8FhZnOg1NA2FJA7p%2BOGULYeGf46TdVRcNQHk8dubrJbjIHcW7eBVZPbWS0jN6KrvqIde2fci5fkpGjT2Gu%2BrdfetS6%2B1VlYnVS7apCz7hqkHtxRozh7UA2UJ5V%2BjVZsFvR6IG7s1o2LoNWYUOVmjRUi3N2Q5R52gcLhjZGVz8O5iN0mLJaA%2Bp%2B4%2FxDazYcyfa8GHRNFM2FipV%2FVJopMDUTot%2BZiR1lrv0f1rOIqaS948dm50rvXXfS2mrL5aclgF0bY7S9X1PQ1mQsE9LZsAm8U%2FGbiSy4c%2B9xM%2FMtnEC9tV9fpzDBgT9RBBcGWBgTLdKAzFehs53enKfW5t9Mld1AdaejugW7A8YEd94hknrmtzztY%2BzBaxeYg8vLBGfT%2Fv9F3zw6xsRLS3ggqmva%2B%2FrdadSa%2Bqlc8bsKMSbWYmd7Wp70kLHommLsR1CEW4YJimujhoxZFRBEz0bbYEr9EqHttUqZAfNsiKPbSB6kNF5LsMPuH79UGOqUBRoDSe53r4wGq%2F%2BVWrucB4AhkknjLkBXruPPwVZPXjbQDPgcCWpPTFnzLsO14pFbArxu2TU2FfnIy4Oz1YhqjiY0AT1gkVeWbcO77kXjh46zuy1KzpyothALwlFGKlwYkjKIlfIlEWcspn9eXd4JOGqyrPVEubfFa53IOjl%2FwD7GR%2FlzL1NopGqwPmkXgaLxUMH5x8N3os3OY48P5f2jDbx6MD0TC&X-Amz-Signature=a032bc1d84662f8d4052d16b5659b04d81e8eb24659209128e42510c0e52db6f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RIQSB3L6%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFrHb65i8BAWLSRx5X6pyzocMhUOGrNy9UpvDmuvNLpSAiEAiKntJZ9sDsLvnVP375hvrH2rBD8nBQiPaDZEMMzC0NEq%2FwMITxAAGgw2Mzc0MjMxODM4MDUiDKl%2FaILvZXCMxcaBcircA1qKaYE5rySv%2BA3RPhAgYVV0VwCmCOpiJMoWM23rMt9kDmZGFIrHyaic6Heb1U2OaYSU3kFuQA%2Bh9voNt1GeOwM0tuQ2JigQg11pnJRGrs%2F25jVX56AUZLFlwQ9n7%2FRen6hIOeguNTAu2xVEea5IamUwaEIc7wI46x9PmrEEuDVVSgzqDSIzf5FuxTyF%2FQEOFhPMW0y4G1mtrNU1mEjvqTb%2Bc4gGRSgLbSaQFEMYheZV8Q8NvBFDVnwNd0Xgpmw13LB92HLi8nYCTB9SiKRqDd4neh2b%2B5OSO9PvB1KjtUNcPS5QaAaMgaOmjOgb3wDdZEDW3e9Hs3tT6paqrJdYJvF%2Bn%2FmHY6ms2idgJgeEgrpkD3AgZ67izzEC8128r1RELICLFOjtco%2B%2FLZDLhPA1qqRbhJiprMwbHLEcncAwON5qlRph9zK2u5NHHgozyvrYblZnNB3lu2ps4LkMc1ABGpT9StTQ6isc5eWJlS4KBVjaAjVki3sDqDdU8GcsorTqVXaZ6Jzvi9QcLXSDcVHufkvjEaa1eclcSbAaKpNMTypxuavwmQbZRqzoNGo%2BD0xqVbx67Zd5TZN%2BWPj3AXsvBg8T5%2Fuo1MPzUHe36DSmiuncYYwMv9SLb0c6PZtPMPqK79UGOqUB2n2DVl12NceISrcQ29qC8JLvnOxZAMc%2BFtkUFBebvS%2Bs%2Ff5zwkkgesCfYCoXWKfwkVM%2FKEFAFretr%2FRQLuVXkRFyNLvJV%2B4Zq566xL1dScRfW5beNGlIKx5OfXfhocYTYXwf42bDiHtzX9Z%2B68YMR10FvyGbUtzRpJSRbnHTD5ljHWubkrjOF5tm0UL8dE9QGo%2BpyZ5s2CHfW8jO9TxxSaiOmRU8&X-Amz-Signature=6c6746e4e143708e4dea2e82d7a2f5bc739d4bd76dbeec800ea5daedffc33858&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RIQSB3L6%2F20260929%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260929T143738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFrHb65i8BAWLSRx5X6pyzocMhUOGrNy9UpvDmuvNLpSAiEAiKntJZ9sDsLvnVP375hvrH2rBD8nBQiPaDZEMMzC0NEq%2FwMITxAAGgw2Mzc0MjMxODM4MDUiDKl%2FaILvZXCMxcaBcircA1qKaYE5rySv%2BA3RPhAgYVV0VwCmCOpiJMoWM23rMt9kDmZGFIrHyaic6Heb1U2OaYSU3kFuQA%2Bh9voNt1GeOwM0tuQ2JigQg11pnJRGrs%2F25jVX56AUZLFlwQ9n7%2FRen6hIOeguNTAu2xVEea5IamUwaEIc7wI46x9PmrEEuDVVSgzqDSIzf5FuxTyF%2FQEOFhPMW0y4G1mtrNU1mEjvqTb%2Bc4gGRSgLbSaQFEMYheZV8Q8NvBFDVnwNd0Xgpmw13LB92HLi8nYCTB9SiKRqDd4neh2b%2B5OSO9PvB1KjtUNcPS5QaAaMgaOmjOgb3wDdZEDW3e9Hs3tT6paqrJdYJvF%2Bn%2FmHY6ms2idgJgeEgrpkD3AgZ67izzEC8128r1RELICLFOjtco%2B%2FLZDLhPA1qqRbhJiprMwbHLEcncAwON5qlRph9zK2u5NHHgozyvrYblZnNB3lu2ps4LkMc1ABGpT9StTQ6isc5eWJlS4KBVjaAjVki3sDqDdU8GcsorTqVXaZ6Jzvi9QcLXSDcVHufkvjEaa1eclcSbAaKpNMTypxuavwmQbZRqzoNGo%2BD0xqVbx67Zd5TZN%2BWPj3AXsvBg8T5%2Fuo1MPzUHe36DSmiuncYYwMv9SLb0c6PZtPMPqK79UGOqUB2n2DVl12NceISrcQ29qC8JLvnOxZAMc%2BFtkUFBebvS%2Bs%2Ff5zwkkgesCfYCoXWKfwkVM%2FKEFAFretr%2FRQLuVXkRFyNLvJV%2B4Zq566xL1dScRfW5beNGlIKx5OfXfhocYTYXwf42bDiHtzX9Z%2B68YMR10FvyGbUtzRpJSRbnHTD5ljHWubkrjOF5tm0UL8dE9QGo%2BpyZ5s2CHfW8jO9TxxSaiOmRU8&X-Amz-Signature=be16069689b39f82720cb1c09dd0f0ac69b7101c8661834b6324896722c6a523&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
