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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z75CI5CL%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQDawY4vBI4rouxdnMlG4LLeoPXUUqURVQ%2FdS0WbtoL8sQIhANCAzip6QZfC1%2BgtksuTJFi%2BcPAG7zGaV3%2BoBkblhKM8Kv8DCEEQABoMNjM3NDIzMTgzODA1Igy7h5yudcNUC42H0jQq3APdm2QofU3EHM04eRwOSNREMJ8msneVqOV%2FrlgfrU3h6GTitMwzftEeAKzPSTS%2FE2KwltgMW2PgTMzbL0A7RrJtuLxfmYmUEpI9%2Bts3EuTAh7wnx7DrTVcuuBZh%2BctkKNYL8BqfNAFfUHusb8vp8QW4aYK8Ly20wY09tdRL8HLrYXcR0sfIOtX0Sehu5jIyHN9pGPyR14ghVEEnkYyROAZc%2F7kplMxz%2BvXld62h65tgGSiju%2BUq8Y7qE5TclbuNcCIcdDkaFwitOUwsxwEx5Z%2Fdo6VCrYG5mB%2Bsl7HIjQUcNQ1SXvdism6SCjsdr3YznEczmJaVxdTx3Jp5nCcBL8heWjIzOVtNdbvuJ2g%2Fc5cer%2FTh4R8K2XdLo7aYJPAiVI%2FQlgnvZENDwAetWyHEbpIvISYOGm0xBiBkJ8Khcp2C6NuNNanlBSucmr7UjMkhdNTf7cPfzihhua1fjRKdngUbLzXz%2F7GH%2BywLDkWY1078qWrVQUHKBelrAeXF2bSAy68TrpFWAbx9YYgGFbfgjB9QjumRqxtBbY4FA7OebUv2%2FAsG%2BHplVFqHLI585wl7xj%2B%2BtrbdYdWA7c3mlZME%2FTBr4q7u5am8%2BH5V%2BhGAnt4MLf52l0bf9vKMTb%2BWuDC8iovUBjqkAdk2ppWJFK4XU%2BFJwIU7LR6xBKpbklwMPAMif7JQa1K4YukVQGRSKmJCZ3MrVf%2FmpTMtyFviUoZeI7n1bce6F7UdB%2B1h0xPbG8bskZivgLU7JJdOh9wc6vlCkYRkSV1%2B%2BF7mOZv2EscXmZcdgWHDenGwsuIDawBp1b2QJwR2GbLCRqRJgiRBPA5w2wEJ6C8hWDKzWw029vU4tlGUeNjMn%2FUVDJVY&X-Amz-Signature=7d5e14806d3493ef80a5ace885d1d2a72aa81755786f0942f62378732fb13d4f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z75CI5CL%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQDawY4vBI4rouxdnMlG4LLeoPXUUqURVQ%2FdS0WbtoL8sQIhANCAzip6QZfC1%2BgtksuTJFi%2BcPAG7zGaV3%2BoBkblhKM8Kv8DCEEQABoMNjM3NDIzMTgzODA1Igy7h5yudcNUC42H0jQq3APdm2QofU3EHM04eRwOSNREMJ8msneVqOV%2FrlgfrU3h6GTitMwzftEeAKzPSTS%2FE2KwltgMW2PgTMzbL0A7RrJtuLxfmYmUEpI9%2Bts3EuTAh7wnx7DrTVcuuBZh%2BctkKNYL8BqfNAFfUHusb8vp8QW4aYK8Ly20wY09tdRL8HLrYXcR0sfIOtX0Sehu5jIyHN9pGPyR14ghVEEnkYyROAZc%2F7kplMxz%2BvXld62h65tgGSiju%2BUq8Y7qE5TclbuNcCIcdDkaFwitOUwsxwEx5Z%2Fdo6VCrYG5mB%2Bsl7HIjQUcNQ1SXvdism6SCjsdr3YznEczmJaVxdTx3Jp5nCcBL8heWjIzOVtNdbvuJ2g%2Fc5cer%2FTh4R8K2XdLo7aYJPAiVI%2FQlgnvZENDwAetWyHEbpIvISYOGm0xBiBkJ8Khcp2C6NuNNanlBSucmr7UjMkhdNTf7cPfzihhua1fjRKdngUbLzXz%2F7GH%2BywLDkWY1078qWrVQUHKBelrAeXF2bSAy68TrpFWAbx9YYgGFbfgjB9QjumRqxtBbY4FA7OebUv2%2FAsG%2BHplVFqHLI585wl7xj%2B%2BtrbdYdWA7c3mlZME%2FTBr4q7u5am8%2BH5V%2BhGAnt4MLf52l0bf9vKMTb%2BWuDC8iovUBjqkAdk2ppWJFK4XU%2BFJwIU7LR6xBKpbklwMPAMif7JQa1K4YukVQGRSKmJCZ3MrVf%2FmpTMtyFviUoZeI7n1bce6F7UdB%2B1h0xPbG8bskZivgLU7JJdOh9wc6vlCkYRkSV1%2B%2BF7mOZv2EscXmZcdgWHDenGwsuIDawBp1b2QJwR2GbLCRqRJgiRBPA5w2wEJ6C8hWDKzWw029vU4tlGUeNjMn%2FUVDJVY&X-Amz-Signature=fd43a4b4c3c69ffda87aaa5ad78c609607922ae292d2de48329419a5c9f93ad7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z75CI5CL%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQDawY4vBI4rouxdnMlG4LLeoPXUUqURVQ%2FdS0WbtoL8sQIhANCAzip6QZfC1%2BgtksuTJFi%2BcPAG7zGaV3%2BoBkblhKM8Kv8DCEEQABoMNjM3NDIzMTgzODA1Igy7h5yudcNUC42H0jQq3APdm2QofU3EHM04eRwOSNREMJ8msneVqOV%2FrlgfrU3h6GTitMwzftEeAKzPSTS%2FE2KwltgMW2PgTMzbL0A7RrJtuLxfmYmUEpI9%2Bts3EuTAh7wnx7DrTVcuuBZh%2BctkKNYL8BqfNAFfUHusb8vp8QW4aYK8Ly20wY09tdRL8HLrYXcR0sfIOtX0Sehu5jIyHN9pGPyR14ghVEEnkYyROAZc%2F7kplMxz%2BvXld62h65tgGSiju%2BUq8Y7qE5TclbuNcCIcdDkaFwitOUwsxwEx5Z%2Fdo6VCrYG5mB%2Bsl7HIjQUcNQ1SXvdism6SCjsdr3YznEczmJaVxdTx3Jp5nCcBL8heWjIzOVtNdbvuJ2g%2Fc5cer%2FTh4R8K2XdLo7aYJPAiVI%2FQlgnvZENDwAetWyHEbpIvISYOGm0xBiBkJ8Khcp2C6NuNNanlBSucmr7UjMkhdNTf7cPfzihhua1fjRKdngUbLzXz%2F7GH%2BywLDkWY1078qWrVQUHKBelrAeXF2bSAy68TrpFWAbx9YYgGFbfgjB9QjumRqxtBbY4FA7OebUv2%2FAsG%2BHplVFqHLI585wl7xj%2B%2BtrbdYdWA7c3mlZME%2FTBr4q7u5am8%2BH5V%2BhGAnt4MLf52l0bf9vKMTb%2BWuDC8iovUBjqkAdk2ppWJFK4XU%2BFJwIU7LR6xBKpbklwMPAMif7JQa1K4YukVQGRSKmJCZ3MrVf%2FmpTMtyFviUoZeI7n1bce6F7UdB%2B1h0xPbG8bskZivgLU7JJdOh9wc6vlCkYRkSV1%2B%2BF7mOZv2EscXmZcdgWHDenGwsuIDawBp1b2QJwR2GbLCRqRJgiRBPA5w2wEJ6C8hWDKzWw029vU4tlGUeNjMn%2FUVDJVY&X-Amz-Signature=6ccd78c41782e180c5963fcd895d3ffc8f042f342baec1e546a3761f0d620661&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UTZT2CVG%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIDoNX8FimWM9xJopsuvh2BG4ClXZrORCoPXXz%2B%2B2Er%2B%2FAiEA%2F6mmT74zSl0AIdWt5K%2BheVKnW2FUWM5RuDTrbaGZkQkq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDNofYjNNkVwV%2FomJNCrcA4PixFzqu%2Fmlqm9l1BxrdGA4eMsBaQf7lMJofnaYT5fVmDm%2B0mrZVlOuShJT6Zst%2B9vbSdD2xWolJr34dUai%2FPxL6fSS9gPpxGBZpeOoe0605nY5V2gjvbOURu44BpqdV%2BUpIjOJ%2FQf6sSdt%2BEVieXGhzJF1mLcwZ%2BxGavh5GbOv%2FJVTmqafH2wNIfY2as52KGXs39sF1x8GJZjANlemECH1vimSMzLhtqUzPwZmxOIv8oexfQv9I4%2Bv6RIAJMbRlpd8mAAuyEy6PrK%2Fc4EFjhYeFlEe13wlHKTIfeiBy87HoKIvDFX15CwclwwCW6UZOL9UUoKgjVv1iUI2wYvQE4VjJ9hhsysAer0kQTQdrBJGlGyder6S3v2kI7MX1BVXo2nPkaS2bf2hQIZnQPHu3qeCzlfjHkmKhp%2FzkNpBtX7DYvgt233w1MA6q0CQIj5Qnmy6GZqpZanDWDNDXk4NmIo%2BPj%2BywtAZSU1dbDisbq1bXHOeDyf92r5uLd%2FxCG6R%2FrIxiGycRoNv%2BcP%2Fo3fgh9fb1xieyvDcMANTpvWxmDh4QHQ8tVWwLdxewQQVNkncg7%2BQggeJW%2BT%2Bllp6c%2Bzl5Sw6M0LG6uhLfygMjOC9eqNBhLl72iNK0M%2FZ3e0iMPWGi9QGOqUBrdqE%2FI9YHVxLGBkl5ilsZDpmXKIpQBS7pFSVVSqShH2aFTw4L6Nx%2FWfcuJiEZqvKxXM9xE%2FANPd5zgtttK8vf524x2na6nLVXn0HCtIOksWxssPMe1UcVcWZQh8%2Br4oPHIlmlvEumdTe5eMO7rggEJXlm6W7JJ2cQybKpqrkP2%2FcDwgflWrYF64A%2B3M%2BtX9HTNvZVhRlWftweXONbICBidZ%2B92OR&X-Amz-Signature=c0003f01cf3146e2a34fb04489673f1b1a06dcee8dcdba76c1f855e3fe13f76e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UTZT2CVG%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIDoNX8FimWM9xJopsuvh2BG4ClXZrORCoPXXz%2B%2B2Er%2B%2FAiEA%2F6mmT74zSl0AIdWt5K%2BheVKnW2FUWM5RuDTrbaGZkQkq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDNofYjNNkVwV%2FomJNCrcA4PixFzqu%2Fmlqm9l1BxrdGA4eMsBaQf7lMJofnaYT5fVmDm%2B0mrZVlOuShJT6Zst%2B9vbSdD2xWolJr34dUai%2FPxL6fSS9gPpxGBZpeOoe0605nY5V2gjvbOURu44BpqdV%2BUpIjOJ%2FQf6sSdt%2BEVieXGhzJF1mLcwZ%2BxGavh5GbOv%2FJVTmqafH2wNIfY2as52KGXs39sF1x8GJZjANlemECH1vimSMzLhtqUzPwZmxOIv8oexfQv9I4%2Bv6RIAJMbRlpd8mAAuyEy6PrK%2Fc4EFjhYeFlEe13wlHKTIfeiBy87HoKIvDFX15CwclwwCW6UZOL9UUoKgjVv1iUI2wYvQE4VjJ9hhsysAer0kQTQdrBJGlGyder6S3v2kI7MX1BVXo2nPkaS2bf2hQIZnQPHu3qeCzlfjHkmKhp%2FzkNpBtX7DYvgt233w1MA6q0CQIj5Qnmy6GZqpZanDWDNDXk4NmIo%2BPj%2BywtAZSU1dbDisbq1bXHOeDyf92r5uLd%2FxCG6R%2FrIxiGycRoNv%2BcP%2Fo3fgh9fb1xieyvDcMANTpvWxmDh4QHQ8tVWwLdxewQQVNkncg7%2BQggeJW%2BT%2Bllp6c%2Bzl5Sw6M0LG6uhLfygMjOC9eqNBhLl72iNK0M%2FZ3e0iMPWGi9QGOqUBrdqE%2FI9YHVxLGBkl5ilsZDpmXKIpQBS7pFSVVSqShH2aFTw4L6Nx%2FWfcuJiEZqvKxXM9xE%2FANPd5zgtttK8vf524x2na6nLVXn0HCtIOksWxssPMe1UcVcWZQh8%2Br4oPHIlmlvEumdTe5eMO7rggEJXlm6W7JJ2cQybKpqrkP2%2FcDwgflWrYF64A%2B3M%2BtX9HTNvZVhRlWftweXONbICBidZ%2B92OR&X-Amz-Signature=a2946f5ef4a114d094cdeac783f91145b2b556dce5fce9000beb7c9d9af4245a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UTZT2CVG%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIDoNX8FimWM9xJopsuvh2BG4ClXZrORCoPXXz%2B%2B2Er%2B%2FAiEA%2F6mmT74zSl0AIdWt5K%2BheVKnW2FUWM5RuDTrbaGZkQkq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDNofYjNNkVwV%2FomJNCrcA4PixFzqu%2Fmlqm9l1BxrdGA4eMsBaQf7lMJofnaYT5fVmDm%2B0mrZVlOuShJT6Zst%2B9vbSdD2xWolJr34dUai%2FPxL6fSS9gPpxGBZpeOoe0605nY5V2gjvbOURu44BpqdV%2BUpIjOJ%2FQf6sSdt%2BEVieXGhzJF1mLcwZ%2BxGavh5GbOv%2FJVTmqafH2wNIfY2as52KGXs39sF1x8GJZjANlemECH1vimSMzLhtqUzPwZmxOIv8oexfQv9I4%2Bv6RIAJMbRlpd8mAAuyEy6PrK%2Fc4EFjhYeFlEe13wlHKTIfeiBy87HoKIvDFX15CwclwwCW6UZOL9UUoKgjVv1iUI2wYvQE4VjJ9hhsysAer0kQTQdrBJGlGyder6S3v2kI7MX1BVXo2nPkaS2bf2hQIZnQPHu3qeCzlfjHkmKhp%2FzkNpBtX7DYvgt233w1MA6q0CQIj5Qnmy6GZqpZanDWDNDXk4NmIo%2BPj%2BywtAZSU1dbDisbq1bXHOeDyf92r5uLd%2FxCG6R%2FrIxiGycRoNv%2BcP%2Fo3fgh9fb1xieyvDcMANTpvWxmDh4QHQ8tVWwLdxewQQVNkncg7%2BQggeJW%2BT%2Bllp6c%2Bzl5Sw6M0LG6uhLfygMjOC9eqNBhLl72iNK0M%2FZ3e0iMPWGi9QGOqUBrdqE%2FI9YHVxLGBkl5ilsZDpmXKIpQBS7pFSVVSqShH2aFTw4L6Nx%2FWfcuJiEZqvKxXM9xE%2FANPd5zgtttK8vf524x2na6nLVXn0HCtIOksWxssPMe1UcVcWZQh8%2Br4oPHIlmlvEumdTe5eMO7rggEJXlm6W7JJ2cQybKpqrkP2%2FcDwgflWrYF64A%2B3M%2BtX9HTNvZVhRlWftweXONbICBidZ%2B92OR&X-Amz-Signature=abb62ccb7ed9da0226caaa835536bf24ce0cd22e323eafb97bf31eae9005b461&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UTZT2CVG%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084043Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIDoNX8FimWM9xJopsuvh2BG4ClXZrORCoPXXz%2B%2B2Er%2B%2FAiEA%2F6mmT74zSl0AIdWt5K%2BheVKnW2FUWM5RuDTrbaGZkQkq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDNofYjNNkVwV%2FomJNCrcA4PixFzqu%2Fmlqm9l1BxrdGA4eMsBaQf7lMJofnaYT5fVmDm%2B0mrZVlOuShJT6Zst%2B9vbSdD2xWolJr34dUai%2FPxL6fSS9gPpxGBZpeOoe0605nY5V2gjvbOURu44BpqdV%2BUpIjOJ%2FQf6sSdt%2BEVieXGhzJF1mLcwZ%2BxGavh5GbOv%2FJVTmqafH2wNIfY2as52KGXs39sF1x8GJZjANlemECH1vimSMzLhtqUzPwZmxOIv8oexfQv9I4%2Bv6RIAJMbRlpd8mAAuyEy6PrK%2Fc4EFjhYeFlEe13wlHKTIfeiBy87HoKIvDFX15CwclwwCW6UZOL9UUoKgjVv1iUI2wYvQE4VjJ9hhsysAer0kQTQdrBJGlGyder6S3v2kI7MX1BVXo2nPkaS2bf2hQIZnQPHu3qeCzlfjHkmKhp%2FzkNpBtX7DYvgt233w1MA6q0CQIj5Qnmy6GZqpZanDWDNDXk4NmIo%2BPj%2BywtAZSU1dbDisbq1bXHOeDyf92r5uLd%2FxCG6R%2FrIxiGycRoNv%2BcP%2Fo3fgh9fb1xieyvDcMANTpvWxmDh4QHQ8tVWwLdxewQQVNkncg7%2BQggeJW%2BT%2Bllp6c%2Bzl5Sw6M0LG6uhLfygMjOC9eqNBhLl72iNK0M%2FZ3e0iMPWGi9QGOqUBrdqE%2FI9YHVxLGBkl5ilsZDpmXKIpQBS7pFSVVSqShH2aFTw4L6Nx%2FWfcuJiEZqvKxXM9xE%2FANPd5zgtttK8vf524x2na6nLVXn0HCtIOksWxssPMe1UcVcWZQh8%2Br4oPHIlmlvEumdTe5eMO7rggEJXlm6W7JJ2cQybKpqrkP2%2FcDwgflWrYF64A%2B3M%2BtX9HTNvZVhRlWftweXONbICBidZ%2B92OR&X-Amz-Signature=2908f598e5c98cd20395ba7a56da185e091c89a4b77b5f33ccdecded8fa0a3ee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UKS56J2R%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084044Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQCYgdRgqCcXmogLueY3fayQX6O0jR9XstfRW3Klxbw2JgIgYBrzZVH66bJwJZ5FPvSdpjfhP85Ox2Lqcbq1N6AV68cq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDH57%2FzZSeFptpYNLGircAxXQEfvmFnaqVbiOvsi%2FBdsjO8S7MYwS2Ftc%2Bd8ZPHSykgHENw8kxfCnGWibmcfE6znEtE6o1vZRqwDTX9AIEHwN34o5KFwcqubOhui%2FKrzp0QhgOo1n3iadwbjxX79UW5NQHCjnytMzmJ0mshN%2B%2FPCUWj4QHS1hj%2FNwcCCAFw1B%2BN4m2YZsM6k%2F4KA%2Bt%2BBp%2BRDVWsq7XVvMfaN%2BaVsoED2Nah2t%2BJMVOfFhCSUnY7hBpVGsGHsW3Bac%2FFu0pGAdI5x2zPaxJMvQO2dXUw5D%2Bf%2FHGMXQGQdeV57k2X5OfJkkNOdjp%2FNLg2rDKfI8sVmIiJNcoq%2BF66Bwbx3J%2FUVhn3Cvi5nrSTM8p0w3ZqMXHYLo9I3z2dLrVeYFoOxfKuKVNmZHZeVcV7B4pHJFQzXc9G0y0rWq4tMNOXRHIbHUHWrM1xDOoF5DCWSp%2FH5y8wuNlZRbTWwGZOeJzPsViLD9nQWax%2F1gSP5E5M3d5z6%2BjAbkLW18bVPNMdRx49VUkBgM9eKSOBN%2FrODnhR9ujo%2BpXKx4Qm5ZSg9rTHOslNKq%2BaktySYa6s7fz%2FPyECnqb9uCcUmPyIcJpGgDX7jComSSZ1nTPpLJm7vHJgWWP5mXMvKbx7sQnfmkJESP1%2BB%2FMPaGi9QGOqUBGa1c%2Fji7Emnu66EthU0YA%2F8JVEb9ipfGBa9Qn7u09DUItr5bwMu4izdmsOC4AHt3qeomeVjd8Yry%2B4nyJcT1p7HtYIemk558xUH78rNnEH123XONkcz44%2Bzs3CseBMDtigfivn0nVyPpGZULqt5FXw4FAN7bCMNAdAsgT1iCKZEq9GBZSVfapqzwDwvmwFA2JDnjQxf4mEgDb3KO7%2FOltrrOzziX&X-Amz-Signature=9d1099688544b09e3b0bc20dbc5d8ba26d424b5d340aa15e7b43573465aec7a4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662QFKRZBS%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084044Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIHU2M4ZkvX6ErtcFph%2Bw%2BBU80EtGmWDjJjSdg9oR01D2AiEAkPiPn78AC7AY9cBF26AypRwgkJtrLOvUKahzrW9N7Ygq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDIZHQ27qdEEchDUr1ircAycm%2Bs7Oyjnj5uC9XfrJdrw6a3HuKN0azbS2Ja1sReptbMokwjsNF4fWr7sTTIuFle1aJyop7LB0fyBVbaa7TCkBRHIHniINlRhDIgXVwAMX1AAI8GsKI3r91ZdF2aDZ%2Brxs3laKrABR5ME8iVxjg8u%2BlERHEjuxhiu0hMgrx2ktgFbN1CcdhRVA0vqmlnhe5QYQ3RaTImiOLKITQBXAu8yMEPY8AlviKiWrWDybZrTRcOB0YARyKCZC9XhGdPCEw8qEFNxPR98FlwEA%2By2VPxS%2BMFfiYJJ84A2RwF0cCbv4l2yw56rnyv3UQ7yi%2Fow9uS2LbnJsIYSx73pHtrzLXfMdYYDCIlRL3YOufdC%2FYk%2FWXeYFu6QUJehTOZukEu%2BwmhDmuUCfjUkcpuTUJoM6Kwl2a1laV%2B7cZ%2BUfDiipj395FBfAqQtKAAOx1jnCqLT2GbTw9Fsyc0ayuNmHTnGxiHMWUiey4WeMUgCoEoWBxwtamk3uFx9ECmUs1fzHUU8J2u7%2BsKx9AgA8hDAdOY8aUlS4gYLloJXeyU9rYrjvPMp1BF02BnMEi77%2B1%2FJjxFfO%2BsiJvs9dyITFnYqo8JKSU9dCPvM6zqQ9aEvMLj3UFUZUvxrEjcrlGhm0L%2BUOMKyHi9QGOqUBty7U3zh58WJ6qekLl4yDvUMyhZm9OE54BS1e3EqNBC7U%2BG1SA69BGu3RDxkb%2FTLZz7uWtoxiGH%2Brc5c4qiwueDxFT22vYZRRh2sBV01w2fQ9ShnCBhFcUQGT1ps7EOhrmj3rmTUS1oNgLeC1Z5bfpkk8yX3Bq1bIYf1czCZLTNrbT0c1kotAm8GvHz7RCQpQslUQudWX10HPSr8cQZatVnBHMKpQ&X-Amz-Signature=a20448046423e14d5b4a69720d35b21a24c57141836cdd9039ca37c0c2b3bcc0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662QFKRZBS%2F20260817%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260817T084044Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIHU2M4ZkvX6ErtcFph%2Bw%2BBU80EtGmWDjJjSdg9oR01D2AiEAkPiPn78AC7AY9cBF26AypRwgkJtrLOvUKahzrW9N7Ygq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDIZHQ27qdEEchDUr1ircAycm%2Bs7Oyjnj5uC9XfrJdrw6a3HuKN0azbS2Ja1sReptbMokwjsNF4fWr7sTTIuFle1aJyop7LB0fyBVbaa7TCkBRHIHniINlRhDIgXVwAMX1AAI8GsKI3r91ZdF2aDZ%2Brxs3laKrABR5ME8iVxjg8u%2BlERHEjuxhiu0hMgrx2ktgFbN1CcdhRVA0vqmlnhe5QYQ3RaTImiOLKITQBXAu8yMEPY8AlviKiWrWDybZrTRcOB0YARyKCZC9XhGdPCEw8qEFNxPR98FlwEA%2By2VPxS%2BMFfiYJJ84A2RwF0cCbv4l2yw56rnyv3UQ7yi%2Fow9uS2LbnJsIYSx73pHtrzLXfMdYYDCIlRL3YOufdC%2FYk%2FWXeYFu6QUJehTOZukEu%2BwmhDmuUCfjUkcpuTUJoM6Kwl2a1laV%2B7cZ%2BUfDiipj395FBfAqQtKAAOx1jnCqLT2GbTw9Fsyc0ayuNmHTnGxiHMWUiey4WeMUgCoEoWBxwtamk3uFx9ECmUs1fzHUU8J2u7%2BsKx9AgA8hDAdOY8aUlS4gYLloJXeyU9rYrjvPMp1BF02BnMEi77%2B1%2FJjxFfO%2BsiJvs9dyITFnYqo8JKSU9dCPvM6zqQ9aEvMLj3UFUZUvxrEjcrlGhm0L%2BUOMKyHi9QGOqUBty7U3zh58WJ6qekLl4yDvUMyhZm9OE54BS1e3EqNBC7U%2BG1SA69BGu3RDxkb%2FTLZz7uWtoxiGH%2Brc5c4qiwueDxFT22vYZRRh2sBV01w2fQ9ShnCBhFcUQGT1ps7EOhrmj3rmTUS1oNgLeC1Z5bfpkk8yX3Bq1bIYf1czCZLTNrbT0c1kotAm8GvHz7RCQpQslUQudWX10HPSr8cQZatVnBHMKpQ&X-Amz-Signature=f73d6c90d802ea5c9ffd1e953008360f9a5be2cf9601175a0b4000f32975857c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
