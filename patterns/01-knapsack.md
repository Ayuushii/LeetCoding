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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U37E6MCU%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123231Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC8lzK8S0GfSvSqMxAZYb7CnkJsHp0rzMshtnuf2GYMrgIgUcU6vEmcHCfNikB0EmQTe3enCYg%2FrDzBsXGua9tqtBQqiAQIrf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAsNkTCMoZWHdTbkQSrcA1XrweHSgPxFYJrKGyRIlKLDyRozbV5WoHJe%2BiUcsvWEjo%2B%2BstPv4%2F5Z10YkC%2Bq2KhyCNym28KxtG98P0yMUCJ86r%2FDlhbSo2z6ERX%2FfXghIA2L5N0%2FVFAHReNrQQdNG9WswYKxU0a4fy60zaCizF5rExFmKe4%2Fb23%2BdEEWqDdtlW36u9CC1TFngD2o1IWFlMXrvtWPfHYXJOgbA6n3ulefoKkD1u%2FDT%2BSKHuKs2648LBhIIBP%2B4NDNysIzfXxetCvYHsmsj8%2FmZZX7R0BmN6wr0JmZZOkKprW4DMUgFQWtcUb5MWRDj9bI0iirp1E7mkFROVlH2hh%2FFjXT3Uknmz1RWz6YTZgHNt%2FH8bJSCCW%2BalAJGDEFESEAnsgnsc8iC4ihbL7PFoP4lrK1dTdQxeoTrzGyjnEQGHHmyK2Hz4jogx2R5EF5iVD3sfFsmGG%2FqMr4rsUBqCE0m6LzVUA5MgCbDA8bcMbKdqFr5y%2F7tnkgE1GkKq%2FR8u2OR7mG6x%2BNO%2BnFyQCeC5R6oFHbIRRv2k%2FMYvCjst4AHi0%2FTgQRbjJ6AjfZkeOIsqpA6K1sxWYUWgBoLoaC8VlfzKsqAQ0KajPXAbyZ2QYVpmAlW8MOU%2BwT5JyPcid33rB7M7YeEMNO7idIGOqUBs0Wf9HfKEfBdjipr5F9dINzGj%2FXxMYWmehiJ4j3ZBdlOzIvR0rLwZIoZSvh0fd%2FLiXhgkX3E808kj4uIes9A1B4UAOFTFjhOM%2BasVOYCCfNna87QpF2XGcIlGZ86MKYGFLoYPb0Bgp%2FGIVI3jnps5oAGppLByw5Ii8WhwNNkt%2BoV3ipk6eIvNMU5Kvf1IwU%2FJrAP%2Frll2aFrtuoB8vUiCx0WEBVp&X-Amz-Signature=08a71cc937e759975d136b346521d5bcf3515fef76c4d89d3892435de31a4b04&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U37E6MCU%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123231Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC8lzK8S0GfSvSqMxAZYb7CnkJsHp0rzMshtnuf2GYMrgIgUcU6vEmcHCfNikB0EmQTe3enCYg%2FrDzBsXGua9tqtBQqiAQIrf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAsNkTCMoZWHdTbkQSrcA1XrweHSgPxFYJrKGyRIlKLDyRozbV5WoHJe%2BiUcsvWEjo%2B%2BstPv4%2F5Z10YkC%2Bq2KhyCNym28KxtG98P0yMUCJ86r%2FDlhbSo2z6ERX%2FfXghIA2L5N0%2FVFAHReNrQQdNG9WswYKxU0a4fy60zaCizF5rExFmKe4%2Fb23%2BdEEWqDdtlW36u9CC1TFngD2o1IWFlMXrvtWPfHYXJOgbA6n3ulefoKkD1u%2FDT%2BSKHuKs2648LBhIIBP%2B4NDNysIzfXxetCvYHsmsj8%2FmZZX7R0BmN6wr0JmZZOkKprW4DMUgFQWtcUb5MWRDj9bI0iirp1E7mkFROVlH2hh%2FFjXT3Uknmz1RWz6YTZgHNt%2FH8bJSCCW%2BalAJGDEFESEAnsgnsc8iC4ihbL7PFoP4lrK1dTdQxeoTrzGyjnEQGHHmyK2Hz4jogx2R5EF5iVD3sfFsmGG%2FqMr4rsUBqCE0m6LzVUA5MgCbDA8bcMbKdqFr5y%2F7tnkgE1GkKq%2FR8u2OR7mG6x%2BNO%2BnFyQCeC5R6oFHbIRRv2k%2FMYvCjst4AHi0%2FTgQRbjJ6AjfZkeOIsqpA6K1sxWYUWgBoLoaC8VlfzKsqAQ0KajPXAbyZ2QYVpmAlW8MOU%2BwT5JyPcid33rB7M7YeEMNO7idIGOqUBs0Wf9HfKEfBdjipr5F9dINzGj%2FXxMYWmehiJ4j3ZBdlOzIvR0rLwZIoZSvh0fd%2FLiXhgkX3E808kj4uIes9A1B4UAOFTFjhOM%2BasVOYCCfNna87QpF2XGcIlGZ86MKYGFLoYPb0Bgp%2FGIVI3jnps5oAGppLByw5Ii8WhwNNkt%2BoV3ipk6eIvNMU5Kvf1IwU%2FJrAP%2Frll2aFrtuoB8vUiCx0WEBVp&X-Amz-Signature=951ed30e3d971e161e54c0047133281cbfc291b90367fffdf81ac028004287d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U37E6MCU%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123231Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC8lzK8S0GfSvSqMxAZYb7CnkJsHp0rzMshtnuf2GYMrgIgUcU6vEmcHCfNikB0EmQTe3enCYg%2FrDzBsXGua9tqtBQqiAQIrf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAsNkTCMoZWHdTbkQSrcA1XrweHSgPxFYJrKGyRIlKLDyRozbV5WoHJe%2BiUcsvWEjo%2B%2BstPv4%2F5Z10YkC%2Bq2KhyCNym28KxtG98P0yMUCJ86r%2FDlhbSo2z6ERX%2FfXghIA2L5N0%2FVFAHReNrQQdNG9WswYKxU0a4fy60zaCizF5rExFmKe4%2Fb23%2BdEEWqDdtlW36u9CC1TFngD2o1IWFlMXrvtWPfHYXJOgbA6n3ulefoKkD1u%2FDT%2BSKHuKs2648LBhIIBP%2B4NDNysIzfXxetCvYHsmsj8%2FmZZX7R0BmN6wr0JmZZOkKprW4DMUgFQWtcUb5MWRDj9bI0iirp1E7mkFROVlH2hh%2FFjXT3Uknmz1RWz6YTZgHNt%2FH8bJSCCW%2BalAJGDEFESEAnsgnsc8iC4ihbL7PFoP4lrK1dTdQxeoTrzGyjnEQGHHmyK2Hz4jogx2R5EF5iVD3sfFsmGG%2FqMr4rsUBqCE0m6LzVUA5MgCbDA8bcMbKdqFr5y%2F7tnkgE1GkKq%2FR8u2OR7mG6x%2BNO%2BnFyQCeC5R6oFHbIRRv2k%2FMYvCjst4AHi0%2FTgQRbjJ6AjfZkeOIsqpA6K1sxWYUWgBoLoaC8VlfzKsqAQ0KajPXAbyZ2QYVpmAlW8MOU%2BwT5JyPcid33rB7M7YeEMNO7idIGOqUBs0Wf9HfKEfBdjipr5F9dINzGj%2FXxMYWmehiJ4j3ZBdlOzIvR0rLwZIoZSvh0fd%2FLiXhgkX3E808kj4uIes9A1B4UAOFTFjhOM%2BasVOYCCfNna87QpF2XGcIlGZ86MKYGFLoYPb0Bgp%2FGIVI3jnps5oAGppLByw5Ii8WhwNNkt%2BoV3ipk6eIvNMU5Kvf1IwU%2FJrAP%2Frll2aFrtuoB8vUiCx0WEBVp&X-Amz-Signature=cbedde36c7e432d6a0a54bb2a2949210f28a4d52359af82a18b55fb9ccf01929&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJLA2VAV%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123231Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHNjBrrkj1ucitK%2BWqTj%2FLVFs00qJZDtpeGKeSZ20LIQIhAK0MNrrChR7QCmhJPFp%2FqVXq9phMw4oPkAo9X8oADUc6KogECK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTRMxKCAX%2FVvmQFFkq3AN%2BoHNf0djPrAoKswAcGzRU%2FB9wh%2Fu4gn3Hl2tt%2Bi%2B1Z6p0jJ%2B62dAO47GF5AIdz1f8DJ%2FQ1cWunpH0TQcn4nV1aA6e34GWM3UMiu5f69k7abAMX6ITpwRT9Nvu0jJVC7mxf6DS2uAGZcD6CDXxujbueyTDTiR8y1NDFZ0jp9OdHU96%2B8UuZZfpCW%2BVepw9m0YMYFi84Xqdgfzqazs0Wbs8EUXpyr%2FPlt3t6mVsjw405JJR4FB7BRYSBvmqpu%2BrBzfvNuGWjPDgc9RPm95mEZXTomBor3GOPxPzt3MT2VzrTFiufJIXucEFvQCgAOWOjIApu1jfBc7tdTBmiAfgPxm%2Fgllt8oJA%2Big%2FF1G3jS1xHNa9aTE7Lpute3d1tj4SBi%2BcdaIYGRox3z7DT82CgmlGPmsS7sPp68v4mZTX0NDBuDaf9bRbYHKggX6TEAxX4plcSxmvQK6xPcSkEHI78lGO%2BgdopS%2FH3aeiLNNlZ89WwD5aST6Ca%2BLoSQ%2B1rAR%2BvhMbhd1oEPxcmGmq9oVnb0nq3sJddXXAtY8YXlDMtwqli48xe0Fh4R6WLRiUuPl3LKtQBWELxOfGnnSsJLQYpzzHs4OGbQn3YaSo6%2FxNbNyCk3u6DQRqu6X86F1N6DCOuonSBjqkASBv%2F2G2XYeYWCbspb41iSeXD8CqPqWaY%2B8m6ipHNZBjXQzvkKpPLoY5B5QM3DtZ4y7P3VtvluyTFQnWFZ75a7TOKMCDpVxS9%2BtFxxVxITPgmBeNNcb08gh00L0zxIPliyajmCIchPAoUYuxP7aiPDSkMv9LVEo%2FPC2v1cXtnzyAJrk6YbWZi1tekqXRrtXOIMMr6vZ3vDi5y%2BoKfBdR0hnJVfPO&X-Amz-Signature=47130fc68a1c80d615083c9ffcfd662fa59ede8a42accf4c96375d79fa379e69&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJLA2VAV%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123231Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHNjBrrkj1ucitK%2BWqTj%2FLVFs00qJZDtpeGKeSZ20LIQIhAK0MNrrChR7QCmhJPFp%2FqVXq9phMw4oPkAo9X8oADUc6KogECK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTRMxKCAX%2FVvmQFFkq3AN%2BoHNf0djPrAoKswAcGzRU%2FB9wh%2Fu4gn3Hl2tt%2Bi%2B1Z6p0jJ%2B62dAO47GF5AIdz1f8DJ%2FQ1cWunpH0TQcn4nV1aA6e34GWM3UMiu5f69k7abAMX6ITpwRT9Nvu0jJVC7mxf6DS2uAGZcD6CDXxujbueyTDTiR8y1NDFZ0jp9OdHU96%2B8UuZZfpCW%2BVepw9m0YMYFi84Xqdgfzqazs0Wbs8EUXpyr%2FPlt3t6mVsjw405JJR4FB7BRYSBvmqpu%2BrBzfvNuGWjPDgc9RPm95mEZXTomBor3GOPxPzt3MT2VzrTFiufJIXucEFvQCgAOWOjIApu1jfBc7tdTBmiAfgPxm%2Fgllt8oJA%2Big%2FF1G3jS1xHNa9aTE7Lpute3d1tj4SBi%2BcdaIYGRox3z7DT82CgmlGPmsS7sPp68v4mZTX0NDBuDaf9bRbYHKggX6TEAxX4plcSxmvQK6xPcSkEHI78lGO%2BgdopS%2FH3aeiLNNlZ89WwD5aST6Ca%2BLoSQ%2B1rAR%2BvhMbhd1oEPxcmGmq9oVnb0nq3sJddXXAtY8YXlDMtwqli48xe0Fh4R6WLRiUuPl3LKtQBWELxOfGnnSsJLQYpzzHs4OGbQn3YaSo6%2FxNbNyCk3u6DQRqu6X86F1N6DCOuonSBjqkASBv%2F2G2XYeYWCbspb41iSeXD8CqPqWaY%2B8m6ipHNZBjXQzvkKpPLoY5B5QM3DtZ4y7P3VtvluyTFQnWFZ75a7TOKMCDpVxS9%2BtFxxVxITPgmBeNNcb08gh00L0zxIPliyajmCIchPAoUYuxP7aiPDSkMv9LVEo%2FPC2v1cXtnzyAJrk6YbWZi1tekqXRrtXOIMMr6vZ3vDi5y%2BoKfBdR0hnJVfPO&X-Amz-Signature=765913514124bac09d1ab65df2bfe7dbdca058ae4bd60d87f948a1eefdca7d99&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJLA2VAV%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123231Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHNjBrrkj1ucitK%2BWqTj%2FLVFs00qJZDtpeGKeSZ20LIQIhAK0MNrrChR7QCmhJPFp%2FqVXq9phMw4oPkAo9X8oADUc6KogECK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTRMxKCAX%2FVvmQFFkq3AN%2BoHNf0djPrAoKswAcGzRU%2FB9wh%2Fu4gn3Hl2tt%2Bi%2B1Z6p0jJ%2B62dAO47GF5AIdz1f8DJ%2FQ1cWunpH0TQcn4nV1aA6e34GWM3UMiu5f69k7abAMX6ITpwRT9Nvu0jJVC7mxf6DS2uAGZcD6CDXxujbueyTDTiR8y1NDFZ0jp9OdHU96%2B8UuZZfpCW%2BVepw9m0YMYFi84Xqdgfzqazs0Wbs8EUXpyr%2FPlt3t6mVsjw405JJR4FB7BRYSBvmqpu%2BrBzfvNuGWjPDgc9RPm95mEZXTomBor3GOPxPzt3MT2VzrTFiufJIXucEFvQCgAOWOjIApu1jfBc7tdTBmiAfgPxm%2Fgllt8oJA%2Big%2FF1G3jS1xHNa9aTE7Lpute3d1tj4SBi%2BcdaIYGRox3z7DT82CgmlGPmsS7sPp68v4mZTX0NDBuDaf9bRbYHKggX6TEAxX4plcSxmvQK6xPcSkEHI78lGO%2BgdopS%2FH3aeiLNNlZ89WwD5aST6Ca%2BLoSQ%2B1rAR%2BvhMbhd1oEPxcmGmq9oVnb0nq3sJddXXAtY8YXlDMtwqli48xe0Fh4R6WLRiUuPl3LKtQBWELxOfGnnSsJLQYpzzHs4OGbQn3YaSo6%2FxNbNyCk3u6DQRqu6X86F1N6DCOuonSBjqkASBv%2F2G2XYeYWCbspb41iSeXD8CqPqWaY%2B8m6ipHNZBjXQzvkKpPLoY5B5QM3DtZ4y7P3VtvluyTFQnWFZ75a7TOKMCDpVxS9%2BtFxxVxITPgmBeNNcb08gh00L0zxIPliyajmCIchPAoUYuxP7aiPDSkMv9LVEo%2FPC2v1cXtnzyAJrk6YbWZi1tekqXRrtXOIMMr6vZ3vDi5y%2BoKfBdR0hnJVfPO&X-Amz-Signature=95f259fe38892b4e785f450f0e2113aba947b5a9b736ada9fdbbe1259f3875e9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJLA2VAV%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123231Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHNjBrrkj1ucitK%2BWqTj%2FLVFs00qJZDtpeGKeSZ20LIQIhAK0MNrrChR7QCmhJPFp%2FqVXq9phMw4oPkAo9X8oADUc6KogECK3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTRMxKCAX%2FVvmQFFkq3AN%2BoHNf0djPrAoKswAcGzRU%2FB9wh%2Fu4gn3Hl2tt%2Bi%2B1Z6p0jJ%2B62dAO47GF5AIdz1f8DJ%2FQ1cWunpH0TQcn4nV1aA6e34GWM3UMiu5f69k7abAMX6ITpwRT9Nvu0jJVC7mxf6DS2uAGZcD6CDXxujbueyTDTiR8y1NDFZ0jp9OdHU96%2B8UuZZfpCW%2BVepw9m0YMYFi84Xqdgfzqazs0Wbs8EUXpyr%2FPlt3t6mVsjw405JJR4FB7BRYSBvmqpu%2BrBzfvNuGWjPDgc9RPm95mEZXTomBor3GOPxPzt3MT2VzrTFiufJIXucEFvQCgAOWOjIApu1jfBc7tdTBmiAfgPxm%2Fgllt8oJA%2Big%2FF1G3jS1xHNa9aTE7Lpute3d1tj4SBi%2BcdaIYGRox3z7DT82CgmlGPmsS7sPp68v4mZTX0NDBuDaf9bRbYHKggX6TEAxX4plcSxmvQK6xPcSkEHI78lGO%2BgdopS%2FH3aeiLNNlZ89WwD5aST6Ca%2BLoSQ%2B1rAR%2BvhMbhd1oEPxcmGmq9oVnb0nq3sJddXXAtY8YXlDMtwqli48xe0Fh4R6WLRiUuPl3LKtQBWELxOfGnnSsJLQYpzzHs4OGbQn3YaSo6%2FxNbNyCk3u6DQRqu6X86F1N6DCOuonSBjqkASBv%2F2G2XYeYWCbspb41iSeXD8CqPqWaY%2B8m6ipHNZBjXQzvkKpPLoY5B5QM3DtZ4y7P3VtvluyTFQnWFZ75a7TOKMCDpVxS9%2BtFxxVxITPgmBeNNcb08gh00L0zxIPliyajmCIchPAoUYuxP7aiPDSkMv9LVEo%2FPC2v1cXtnzyAJrk6YbWZi1tekqXRrtXOIMMr6vZ3vDi5y%2BoKfBdR0hnJVfPO&X-Amz-Signature=9aac989cba341c0ad39e7eeac4d7d3f9157ac57cb17ea425230a96d5fff945c1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R5IREXLH%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123231Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCv9T57koIdGO04FCsUNlUPdKFt16gC0JtW5OsABUMKSgIgCbpYqOA0LnDMqacH0qvI7FRTLuTaOP9Qqet5va8e1s8qiAQIrf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDSw8jZ%2BEywQ1SFg0ircAznp2xwDlgz%2BY1PKg5b0zC6NXmJt5OhSH0uFCoPNoDjFO%2FylWZln%2FAKnjTIQ7BmY31DSOH5YiMUaHv2KS%2Fmd66Ea9mOcvEBkBY%2FxPL5YWRFeg2Pv%2F2F6%2FVGRlnxBxUpa6sr0jLsLJiHCYeSTwrp%2B9ZHV7d0bmfE1VsSeIshtPN4oujyQFIB8RikZUckb4k2W7K6xWVKdERPHdQ7%2BVu8LI6bpHUpsUSy%2BIgUxNXIH51GdSICou27sWz7wSsnd6N28k2%2FPzRi2QjMKwrZsfdtxzTrXR3I1%2FDh%2Fclh5X3Ce0bH%2FavSMdTvepx85%2BwxW6MlqgjSWFNw%2Ft01blDOHHBrQqesxNtCAd1YId61Kn%2BZWgStmu%2FFK5g322eWDGlGXsvMNXnsjtZDcrEWzjVguQZB%2BIXnXu6zlGBKiiBDS3alw5dlHY5g06GCEAk10eiwSTx7ci9%2B1l1OnNOFLYP19u%2Bd7Gb3m2RdEJGzxRr4aSpwqwXjNZCu%2FRVmw7RXSKKY6BJKu1%2BSy4Unh%2FV4XQL0NCfri8iJhs8u8M8oDbCqUchh5f7BXJ59NL3709XfY1IrKwXNia5gKBbdM3aVL43FTV%2BLuvLObyrWZJp%2FPx%2FctlGyNJdzdYGxdancNYW3gyveVMMy6idIGOqUBrq6u8ppyrBftRn4iJ%2FvX5X23NmnLkfP6S3E5G3oKX1CSp%2BfLli1ngMCwnL0yDbCBsGXp0mTz%2FTzc%2Bv26hfV9fsPB1U5SA6YjvUxy8Qx%2BwqR9%2FCqGP4WUUhBM5WxWwKE7C0zowQJjwkBZJOymFo6sn9fM2rW6niHumSlwwY7lYIExl0VcTZ%2Bv%2Fd6BbcpkPyr6XDMEdBQPMzNLWlWUjolQiLbr%2FZlz&X-Amz-Signature=e295af7aa1453160ee7f0538b6207a8972a6d9ba606c5fa373a29ce798152e90&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663HV262ZY%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123232Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG26MfQ9D8%2FEbidKGbHbmDwQEiXRVCdRW42qzzJeASePAiAMTV5W7km90iZWXlmSqSofGBG7inNDLAsNyc%2B2v2LKEiqIBAit%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMv7kDKnJdbOTv4H9NKtwDtg6FkhBN%2F9qOqHetj1gQZSyvXMkQD6VJZvGKEpKRujKt%2FVL%2FYna8CS%2Fwq6UKSsL6M1543GBVWXmcigmJo2jUhYvCgWvhFNG92YpisP0EgSthZnBMZUQzb0uHWi8GV4yGHg%2FUX5w1I8iE6iBIj8bFT6pB6Ouc%2B%2FR%2FwIf6%2F%2B02II7pAYEIFV8DRV5bludb7efRj89T2JSJpMtLVgbzvUTCFP1GhgF0W20QcqHeeDJ0RIPQrhL7aA10OXInUkbyqvWhJaOXjQ39DZa4mI4z6OC2mPi3aEIoJZMrcpWZDOZToxeS%2BeTR%2FNXlrjf7uhLbTTcgvUf1HtYGKTDaxAECTQ7L6nyhxuBqu72zLBGCckAEgAuXSSxbPOWKTex2CiQ%2Fz2zp6MePzk7p%2BCD3ujy%2FTcbcZOMEIC8AxzGeo1urUdHQc%2BtDNP9e4VzJvkJXqB7Vafe1c1T9ENNVSEe9z9hYSLa67JgyaV%2BmtzbQnU3Pvv90ENgPudvsMIWbzlfltf7hmYjvaBMzLs7aK0A8GCxAxd5znWpieKUizcUexbK%2BAqNJa8HU8shfhk4%2F9xwKB3ZnGMxwdeUqo8WbGSc7fMqvy12ZauIyJfO9Yr93pKD6aFYxpmPT79bI%2BRiEvC0sfQow%2B7mJ0gY6pgH4vvLnjuYyObsO8grqIyqAu3ZtMLliZJ8VTWGxQ8x6GLUmAmJSa0OVQvAM8VrnG%2BzPgsROrcXtYKI%2B2ABSUlKA5S6adpsoBM0MWx3A5JruIwmrzkSvMLN%2FKY40HKbgThZh4yluujZiiJAziJnSTgSnasKWbBggDsJgIr0gmdoE%2Fu%2BDfNNJKvIJGA%2FJ3pH%2BDF4PhjwiMTiiq59nsdrjuhgN2gbrQE9l&X-Amz-Signature=4fb4cc656130e11eaa43f8cf39a883018d6180a7a3f1401f9ba00f8ada49f211&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663HV262ZY%2F20260629%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260629T123232Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG26MfQ9D8%2FEbidKGbHbmDwQEiXRVCdRW42qzzJeASePAiAMTV5W7km90iZWXlmSqSofGBG7inNDLAsNyc%2B2v2LKEiqIBAit%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMv7kDKnJdbOTv4H9NKtwDtg6FkhBN%2F9qOqHetj1gQZSyvXMkQD6VJZvGKEpKRujKt%2FVL%2FYna8CS%2Fwq6UKSsL6M1543GBVWXmcigmJo2jUhYvCgWvhFNG92YpisP0EgSthZnBMZUQzb0uHWi8GV4yGHg%2FUX5w1I8iE6iBIj8bFT6pB6Ouc%2B%2FR%2FwIf6%2F%2B02II7pAYEIFV8DRV5bludb7efRj89T2JSJpMtLVgbzvUTCFP1GhgF0W20QcqHeeDJ0RIPQrhL7aA10OXInUkbyqvWhJaOXjQ39DZa4mI4z6OC2mPi3aEIoJZMrcpWZDOZToxeS%2BeTR%2FNXlrjf7uhLbTTcgvUf1HtYGKTDaxAECTQ7L6nyhxuBqu72zLBGCckAEgAuXSSxbPOWKTex2CiQ%2Fz2zp6MePzk7p%2BCD3ujy%2FTcbcZOMEIC8AxzGeo1urUdHQc%2BtDNP9e4VzJvkJXqB7Vafe1c1T9ENNVSEe9z9hYSLa67JgyaV%2BmtzbQnU3Pvv90ENgPudvsMIWbzlfltf7hmYjvaBMzLs7aK0A8GCxAxd5znWpieKUizcUexbK%2BAqNJa8HU8shfhk4%2F9xwKB3ZnGMxwdeUqo8WbGSc7fMqvy12ZauIyJfO9Yr93pKD6aFYxpmPT79bI%2BRiEvC0sfQow%2B7mJ0gY6pgH4vvLnjuYyObsO8grqIyqAu3ZtMLliZJ8VTWGxQ8x6GLUmAmJSa0OVQvAM8VrnG%2BzPgsROrcXtYKI%2B2ABSUlKA5S6adpsoBM0MWx3A5JruIwmrzkSvMLN%2FKY40HKbgThZh4yluujZiiJAziJnSTgSnasKWbBggDsJgIr0gmdoE%2Fu%2BDfNNJKvIJGA%2FJ3pH%2BDF4PhjwiMTiiq59nsdrjuhgN2gbrQE9l&X-Amz-Signature=92838c9e02a73a3ad814eaeb23360bff83d9978de7b032e838046c8ea5786fad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
