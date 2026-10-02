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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJZFAA46%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF%2FQ%2FrhlPqKJSpEykVzwhOYhKLkKrOEYekC6QBpH4EnrAiEA4uQYLKZXI%2F6Isu452zdOf20fV8057EnE6r6wZcohx2cqiAQIl%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLt3w4K0neJ6DOM6TircA2yo3dpEqedg308JPE%2BzAjwCnQ9hFwPHKZwYXcwatpwhL2ec68VifcR%2FEtxMOcymIEoHkTNkwi9VUD8bJBzhHPU%2BcI2s612VTg4NC%2FZsWcngEpFrPUAcAKzPor9p2EGmymTBWdodyHf%2BTXyrr4dE9409ighVaiEZLq4KbRhaojCsxdF3iQin4SgD0gsjdxqhkjvXeUjoRqS%2FZOSsUgbD6nRgr7Z7gXfPp5TZ6M2UDJwKMtBVJHjAMECFFUljbrVc2yjLt1pFCdgvcJ7dZ5dXRXR%2BAT1ZlSt%2F5fuOkIWlAXd1swMA5B3e3ZuUAL1i907zExyCcUjU8KoPKR57XXb7P1Lz8boArV1tWl9QqN%2FDXWrRXwj%2Bv3IBGA04QRS6LZy6mbqttOT8l9ypzI9RyQSbncBPJqDUh5JIcFTfQZkPUb6HvMkeb423jN%2FBGVmeC%2BxJ9%2Fc5Ri%2B8Nhcc%2FYrtcmx21oPTXlB9TH5c3TCsWwK%2FwdfJjLRxfUWAjXKenNUjDTI1cNOO5vCitU2A%2B6Sv0yRU1U0kNrwfvKHI52r0Zgbi3UcgLrBqbx8Mql7dF3hK1t1YXhYR2%2FzBwvFBHvRXjjN5iszrbFlPAwtUbSGdsrGFdHIoi63paoK51d%2Ba%2FQDqMN70%2FtUGOqUBllleMPNJ73w8UEmtUvHleZLSeHF386Ix%2BsY4UA7hyCH686Th6CMS1VhN3ha4NopNBj%2BPSL6%2Bt87EvjiZPVxjwPIOWHuIK%2FBSqnZcPZg7q5CgPkD3%2F0LaHRX6A%2FE34p1tvUlBELceYuW0%2FPKM4mfcdtAhhLiO2HRJkO3YqzCU6xwohgx4fYTmJ2yn7q0k2N5O48DrvV93LfycPbgMUm8sI4n6bQdO&X-Amz-Signature=5185694ab4078d7ee1d67df760a2f52a34a2f2157add011cd02744034d9d2bb9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJZFAA46%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF%2FQ%2FrhlPqKJSpEykVzwhOYhKLkKrOEYekC6QBpH4EnrAiEA4uQYLKZXI%2F6Isu452zdOf20fV8057EnE6r6wZcohx2cqiAQIl%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLt3w4K0neJ6DOM6TircA2yo3dpEqedg308JPE%2BzAjwCnQ9hFwPHKZwYXcwatpwhL2ec68VifcR%2FEtxMOcymIEoHkTNkwi9VUD8bJBzhHPU%2BcI2s612VTg4NC%2FZsWcngEpFrPUAcAKzPor9p2EGmymTBWdodyHf%2BTXyrr4dE9409ighVaiEZLq4KbRhaojCsxdF3iQin4SgD0gsjdxqhkjvXeUjoRqS%2FZOSsUgbD6nRgr7Z7gXfPp5TZ6M2UDJwKMtBVJHjAMECFFUljbrVc2yjLt1pFCdgvcJ7dZ5dXRXR%2BAT1ZlSt%2F5fuOkIWlAXd1swMA5B3e3ZuUAL1i907zExyCcUjU8KoPKR57XXb7P1Lz8boArV1tWl9QqN%2FDXWrRXwj%2Bv3IBGA04QRS6LZy6mbqttOT8l9ypzI9RyQSbncBPJqDUh5JIcFTfQZkPUb6HvMkeb423jN%2FBGVmeC%2BxJ9%2Fc5Ri%2B8Nhcc%2FYrtcmx21oPTXlB9TH5c3TCsWwK%2FwdfJjLRxfUWAjXKenNUjDTI1cNOO5vCitU2A%2B6Sv0yRU1U0kNrwfvKHI52r0Zgbi3UcgLrBqbx8Mql7dF3hK1t1YXhYR2%2FzBwvFBHvRXjjN5iszrbFlPAwtUbSGdsrGFdHIoi63paoK51d%2Ba%2FQDqMN70%2FtUGOqUBllleMPNJ73w8UEmtUvHleZLSeHF386Ix%2BsY4UA7hyCH686Th6CMS1VhN3ha4NopNBj%2BPSL6%2Bt87EvjiZPVxjwPIOWHuIK%2FBSqnZcPZg7q5CgPkD3%2F0LaHRX6A%2FE34p1tvUlBELceYuW0%2FPKM4mfcdtAhhLiO2HRJkO3YqzCU6xwohgx4fYTmJ2yn7q0k2N5O48DrvV93LfycPbgMUm8sI4n6bQdO&X-Amz-Signature=44b20440bafe9197f904b48263df04dfde858f7f29093d98ccd736857c3bfa02&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJZFAA46%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF%2FQ%2FrhlPqKJSpEykVzwhOYhKLkKrOEYekC6QBpH4EnrAiEA4uQYLKZXI%2F6Isu452zdOf20fV8057EnE6r6wZcohx2cqiAQIl%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLt3w4K0neJ6DOM6TircA2yo3dpEqedg308JPE%2BzAjwCnQ9hFwPHKZwYXcwatpwhL2ec68VifcR%2FEtxMOcymIEoHkTNkwi9VUD8bJBzhHPU%2BcI2s612VTg4NC%2FZsWcngEpFrPUAcAKzPor9p2EGmymTBWdodyHf%2BTXyrr4dE9409ighVaiEZLq4KbRhaojCsxdF3iQin4SgD0gsjdxqhkjvXeUjoRqS%2FZOSsUgbD6nRgr7Z7gXfPp5TZ6M2UDJwKMtBVJHjAMECFFUljbrVc2yjLt1pFCdgvcJ7dZ5dXRXR%2BAT1ZlSt%2F5fuOkIWlAXd1swMA5B3e3ZuUAL1i907zExyCcUjU8KoPKR57XXb7P1Lz8boArV1tWl9QqN%2FDXWrRXwj%2Bv3IBGA04QRS6LZy6mbqttOT8l9ypzI9RyQSbncBPJqDUh5JIcFTfQZkPUb6HvMkeb423jN%2FBGVmeC%2BxJ9%2Fc5Ri%2B8Nhcc%2FYrtcmx21oPTXlB9TH5c3TCsWwK%2FwdfJjLRxfUWAjXKenNUjDTI1cNOO5vCitU2A%2B6Sv0yRU1U0kNrwfvKHI52r0Zgbi3UcgLrBqbx8Mql7dF3hK1t1YXhYR2%2FzBwvFBHvRXjjN5iszrbFlPAwtUbSGdsrGFdHIoi63paoK51d%2Ba%2FQDqMN70%2FtUGOqUBllleMPNJ73w8UEmtUvHleZLSeHF386Ix%2BsY4UA7hyCH686Th6CMS1VhN3ha4NopNBj%2BPSL6%2Bt87EvjiZPVxjwPIOWHuIK%2FBSqnZcPZg7q5CgPkD3%2F0LaHRX6A%2FE34p1tvUlBELceYuW0%2FPKM4mfcdtAhhLiO2HRJkO3YqzCU6xwohgx4fYTmJ2yn7q0k2N5O48DrvV93LfycPbgMUm8sI4n6bQdO&X-Amz-Signature=85f90ec806bc63849006df54e269ef774ced835312d4ded10b4ad4eae11b5dcf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XSN2IKDT%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCuabYiD9qT9Vil4xXmtKWqnuWiloV4bAamH7ZAwYQd5QIhALFHK2hS%2FboLSRyLIckDhSvVBUbKw0%2BLHlE3hJ2YSRreKogECJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzAaS9ghqfMmEu1Nu8q3AOkODF50GiRMq4ocxyel6RuSaZuNQRQdRPqqKubx2GzZZ3CNI1aBh2bKavuxn37ixkcl5jKw%2ByCLjKRfYDfFecA7YEQ05VGRuaT0hDOLfAnSIBQAZLfuuxWy9DaFvG0qLImG64SZ8V83oyoauPJCTw%2FzgBkflcAeVKwfH5z5fTtR56n8%2B9IoyFYk2pgZdmcr2jPPdHiBuPkaNCzu8%2BAJXLr47l%2FPvLhlkS4xEfeHupfgFZCYKI7lSghrUCmDpAzDF1SBx30Miz7mKRyu%2BfDi7uQptgS1EAUYjsUldeWf7yHk%2BFTy59gkIlM30%2B0UyrimI47EIHTpZXQi7%2BO788kYrhNnjzZflDymlPDt1kJ2cDvIq19grf3akrS5QaZ70h3lCyrwAUxNOLNddyD923BudmKBK%2FjeFC4IVsPaOFCtREV1RsxPC1e1Lew8AFZdDLmWp4A%2B5bkRoAm2dvKsTzK698KirEgUK5A38pcBWMFqua%2Bz%2FGMY%2B8gYVOfF7WV4kz8FLFXYKOtZzHuBTdhq1IesXcMbxhHXHLb4mJMT%2Foj9fxqs2CGdoC%2FDaWOwbDUijiZf%2FSRc7gbxMh4RUjGkXUANyDH1jhLvQApV%2Bo32rIvmBQsssZqeg0liNBKcro8YzD28%2F7VBjqkAd6zAzQAIXJVxIiBGGk54%2BHqvlH%2Fs08RJg2eJpimaB%2FlF6AI7RcjISy7nGMhQrjjgVNh2QK3v%2BEay3XEn32XerkloRcBJgkDG9G4G2U%2BPyDLnNq8PUVcC8EtV0gBPiTL47uSNqhOKceH6Aw%2B50H0S2nwtFoaKDav0DeI5FKXizR1FjjKYVCAlxrxIBvL6n2Rivi7gOvPIQ%2Fp54efyPu0bNwqpqaL&X-Amz-Signature=ba4a0448c57186d5e3f4876fe2326d6b63c5f77ba3391fbacd980f81c47e4269&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XSN2IKDT%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCuabYiD9qT9Vil4xXmtKWqnuWiloV4bAamH7ZAwYQd5QIhALFHK2hS%2FboLSRyLIckDhSvVBUbKw0%2BLHlE3hJ2YSRreKogECJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzAaS9ghqfMmEu1Nu8q3AOkODF50GiRMq4ocxyel6RuSaZuNQRQdRPqqKubx2GzZZ3CNI1aBh2bKavuxn37ixkcl5jKw%2ByCLjKRfYDfFecA7YEQ05VGRuaT0hDOLfAnSIBQAZLfuuxWy9DaFvG0qLImG64SZ8V83oyoauPJCTw%2FzgBkflcAeVKwfH5z5fTtR56n8%2B9IoyFYk2pgZdmcr2jPPdHiBuPkaNCzu8%2BAJXLr47l%2FPvLhlkS4xEfeHupfgFZCYKI7lSghrUCmDpAzDF1SBx30Miz7mKRyu%2BfDi7uQptgS1EAUYjsUldeWf7yHk%2BFTy59gkIlM30%2B0UyrimI47EIHTpZXQi7%2BO788kYrhNnjzZflDymlPDt1kJ2cDvIq19grf3akrS5QaZ70h3lCyrwAUxNOLNddyD923BudmKBK%2FjeFC4IVsPaOFCtREV1RsxPC1e1Lew8AFZdDLmWp4A%2B5bkRoAm2dvKsTzK698KirEgUK5A38pcBWMFqua%2Bz%2FGMY%2B8gYVOfF7WV4kz8FLFXYKOtZzHuBTdhq1IesXcMbxhHXHLb4mJMT%2Foj9fxqs2CGdoC%2FDaWOwbDUijiZf%2FSRc7gbxMh4RUjGkXUANyDH1jhLvQApV%2Bo32rIvmBQsssZqeg0liNBKcro8YzD28%2F7VBjqkAd6zAzQAIXJVxIiBGGk54%2BHqvlH%2Fs08RJg2eJpimaB%2FlF6AI7RcjISy7nGMhQrjjgVNh2QK3v%2BEay3XEn32XerkloRcBJgkDG9G4G2U%2BPyDLnNq8PUVcC8EtV0gBPiTL47uSNqhOKceH6Aw%2B50H0S2nwtFoaKDav0DeI5FKXizR1FjjKYVCAlxrxIBvL6n2Rivi7gOvPIQ%2Fp54efyPu0bNwqpqaL&X-Amz-Signature=b416d6c25ead49941426fe7968c864888d24cccefa2f85401410a543d66ee4cf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XSN2IKDT%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCuabYiD9qT9Vil4xXmtKWqnuWiloV4bAamH7ZAwYQd5QIhALFHK2hS%2FboLSRyLIckDhSvVBUbKw0%2BLHlE3hJ2YSRreKogECJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzAaS9ghqfMmEu1Nu8q3AOkODF50GiRMq4ocxyel6RuSaZuNQRQdRPqqKubx2GzZZ3CNI1aBh2bKavuxn37ixkcl5jKw%2ByCLjKRfYDfFecA7YEQ05VGRuaT0hDOLfAnSIBQAZLfuuxWy9DaFvG0qLImG64SZ8V83oyoauPJCTw%2FzgBkflcAeVKwfH5z5fTtR56n8%2B9IoyFYk2pgZdmcr2jPPdHiBuPkaNCzu8%2BAJXLr47l%2FPvLhlkS4xEfeHupfgFZCYKI7lSghrUCmDpAzDF1SBx30Miz7mKRyu%2BfDi7uQptgS1EAUYjsUldeWf7yHk%2BFTy59gkIlM30%2B0UyrimI47EIHTpZXQi7%2BO788kYrhNnjzZflDymlPDt1kJ2cDvIq19grf3akrS5QaZ70h3lCyrwAUxNOLNddyD923BudmKBK%2FjeFC4IVsPaOFCtREV1RsxPC1e1Lew8AFZdDLmWp4A%2B5bkRoAm2dvKsTzK698KirEgUK5A38pcBWMFqua%2Bz%2FGMY%2B8gYVOfF7WV4kz8FLFXYKOtZzHuBTdhq1IesXcMbxhHXHLb4mJMT%2Foj9fxqs2CGdoC%2FDaWOwbDUijiZf%2FSRc7gbxMh4RUjGkXUANyDH1jhLvQApV%2Bo32rIvmBQsssZqeg0liNBKcro8YzD28%2F7VBjqkAd6zAzQAIXJVxIiBGGk54%2BHqvlH%2Fs08RJg2eJpimaB%2FlF6AI7RcjISy7nGMhQrjjgVNh2QK3v%2BEay3XEn32XerkloRcBJgkDG9G4G2U%2BPyDLnNq8PUVcC8EtV0gBPiTL47uSNqhOKceH6Aw%2B50H0S2nwtFoaKDav0DeI5FKXizR1FjjKYVCAlxrxIBvL6n2Rivi7gOvPIQ%2Fp54efyPu0bNwqpqaL&X-Amz-Signature=6074ca7c1191db29106da2b98abc5d7b809edc5e4cc2800003e727fb90614164&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XSN2IKDT%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCuabYiD9qT9Vil4xXmtKWqnuWiloV4bAamH7ZAwYQd5QIhALFHK2hS%2FboLSRyLIckDhSvVBUbKw0%2BLHlE3hJ2YSRreKogECJf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzAaS9ghqfMmEu1Nu8q3AOkODF50GiRMq4ocxyel6RuSaZuNQRQdRPqqKubx2GzZZ3CNI1aBh2bKavuxn37ixkcl5jKw%2ByCLjKRfYDfFecA7YEQ05VGRuaT0hDOLfAnSIBQAZLfuuxWy9DaFvG0qLImG64SZ8V83oyoauPJCTw%2FzgBkflcAeVKwfH5z5fTtR56n8%2B9IoyFYk2pgZdmcr2jPPdHiBuPkaNCzu8%2BAJXLr47l%2FPvLhlkS4xEfeHupfgFZCYKI7lSghrUCmDpAzDF1SBx30Miz7mKRyu%2BfDi7uQptgS1EAUYjsUldeWf7yHk%2BFTy59gkIlM30%2B0UyrimI47EIHTpZXQi7%2BO788kYrhNnjzZflDymlPDt1kJ2cDvIq19grf3akrS5QaZ70h3lCyrwAUxNOLNddyD923BudmKBK%2FjeFC4IVsPaOFCtREV1RsxPC1e1Lew8AFZdDLmWp4A%2B5bkRoAm2dvKsTzK698KirEgUK5A38pcBWMFqua%2Bz%2FGMY%2B8gYVOfF7WV4kz8FLFXYKOtZzHuBTdhq1IesXcMbxhHXHLb4mJMT%2Foj9fxqs2CGdoC%2FDaWOwbDUijiZf%2FSRc7gbxMh4RUjGkXUANyDH1jhLvQApV%2Bo32rIvmBQsssZqeg0liNBKcro8YzD28%2F7VBjqkAd6zAzQAIXJVxIiBGGk54%2BHqvlH%2Fs08RJg2eJpimaB%2FlF6AI7RcjISy7nGMhQrjjgVNh2QK3v%2BEay3XEn32XerkloRcBJgkDG9G4G2U%2BPyDLnNq8PUVcC8EtV0gBPiTL47uSNqhOKceH6Aw%2B50H0S2nwtFoaKDav0DeI5FKXizR1FjjKYVCAlxrxIBvL6n2Rivi7gOvPIQ%2Fp54efyPu0bNwqpqaL&X-Amz-Signature=36a5aec80f8066737b630df703e80e9570cc41fc04129564eb920d338166eed1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664V2I3EAW%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142739Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF5IyuKfsZyKxzsrD52SCAMPSOCoqnjXyVV00brKWbNPAiEA9%2BwucMNpQo9hyQUqOv2Nj1xwhNTsapihe2rp4%2FyUVWQqiAQIlv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGH9%2B%2FItUDpclhqncSrcA9z9FPmkCprChmJMpSaDjspT74csy%2Bew8a3EuVtrWkfjFRcVKlChE07Sd3oT9vgNsO1dH5CbP3k3Y5gf%2BAbaS%2F15jrb6JJkRxeySeSdVFOMPZqKqUcq6DgWDVsUgQQwekDrIP1U52LJwbkNxSSndQYkZYbhO68OZ%2B8Kqvjgdt8DGZ8xzAWTs6%2BK8FMiWdt56ohycs7p7PG1%2BjTc8%2Bw8GvxSNfO7GrnMJX22QrC1JIgjDNvN9fMSvZgWunwnSadaZt93ZthFwbWNV4eVKGf9QbScbfcQ0HW5Ua%2Fr6zfC5s%2F3XfY3n1B4AGc%2F4rSyG%2FkyUDvw8jWLPtS%2FNxPn%2F5PNkP%2FjvGe6WVMZMQ80duSKjdeVRsF0q56Jhdy4EuBle6AHFWVLcis18RZ0CKzZf0KSlgssTiNEuW7FbLRXtp82t3Gv%2FMuDz6%2BIQhoTFNAMv6JA3YnEChd%2BFM6Fwq9u5iXleu8%2FoJblq0aJiziK0Ulok89%2F24Lp6GPt0MBTu0KKJiE2YfgyPTtjkGpxQV22IRmrRdRuRHJPZIHXaLfVbFhlDwUoIzLeLiXRFibE%2F5ttCiNq7jTHid73dvLi6P3iJOPCOHjSS58DpzF4Sg1UHla2H8mRB1lVe9tEJxctGTWNSMJj2%2FtUGOqUByTAHWoKVtCVK4vP43fS2fk7nHibdqn1keQ8gO%2B3qFuJeb9senF5AToXOBIFBGszZvuBCzVTeYWbLj5MtDK7tVZk%2BtSw2I1xosyIDopppb%2BehkCpddo4gnUrGHl1xlujjhxe%2FoIckQwvON7%2FYUsjE6joi8jDfoAd06lVoceVeZkOyeAo77gewVgsqY2CgyUxixL5br6k8fWiGFWbuQj8Q2hAqtk9f&X-Amz-Signature=90ed2a3df222a717fb2419a2491e430371227536bf83aae2b64afa35219e500d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ZGE6VEL%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142739Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICEujXibr8zGi0Cxmk2WDMQYfHqY1B4Usj7Uca9UismKAiEA7bNo9flLlmP4nwSCfIUQaqRd0uY3ZtkyQUq9v60KkRAqiAQIlv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBHD%2FbwHXcsr5ZpeISrcA6Y0o21RD9wbf8ZwhFX7B6AII5ZFUQE5OJ17DCnxhveecK5q%2F43d4ER42wQH9RWlzEV2BP0wId9Ft2ICiVaB2lE7j5OtcpvHjEhcEAk9avnmft6b1xWc1UgjM3%2FisrnKLGkWG%2FPEzYDG7xnytTSHKqJurQBf83bbA5SbV%2F2MqOAJJL7ZtB5tnPnZaXHaO4t%2BAZz2aae9obgawt%2B9flieSTy6d6j7qWbXFkTHH0zWXmqjN83RONZiqvD56jbMk5Xz%2BKHzXI1Z3jfSp8yjrGqNsGKftbn6ohjSePDDtLZYEu%2FidiPATJtGdsa%2FEVGtANY8%2BZFOKb1zLKGJjngGQveIjNpQZihS%2BXtmvZgHIHBDrXdktZsFm5keAcjZL3InbhGmSYRfY0Cs4P0CL8P0We6sK9HTvPj53AAuNGlLfmXXnPdpUgfRms9Cw9o6wOEJ08gIxkxBVrUyvTB2T7ujWj1RMiah7j5xNJQLgsgm8qHpJb4MiZlejFI3yXzZ65Oy0iCqDfufoCElDsVhs7kv8TIDAea3JGjz7ip1SZ%2FtUbfgyg4Ys4rjBadDIBVa69wZnpSS4GS7VCg9MlwhQvpp0bx3PaT75MtClDvl9KMFzeJZBB4gv%2Buv0fnSGnnh7THeMO7y%2FtUGOqUBRdYkoaZnePGrQEDrSBcRj%2FDOkoMa73oP32cobczT38sna%2Byvz3Rmu4XjpR2knjq516nYw3jMnMUxMDEh5fuYwxcPuhwQYeKYarf0PzvbRlZ34nX0u0WL6mp%2FRgitQ%2BWpfSxWJp%2FSbfzlhABXOUoYlZZFXSDu3S3tyaxHjFjYsaacjoi9pS90s5t%2FnN%2B0uxj8EO1%2F%2FdUEox8dMF4q9iZYnZiCNIRt&X-Amz-Signature=1f30447288c2bf2f2cf8009abf6999b7b9b94d100d6fe39f0d53eb8ede0c822f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ZGE6VEL%2F20261002%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261002T142739Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICEujXibr8zGi0Cxmk2WDMQYfHqY1B4Usj7Uca9UismKAiEA7bNo9flLlmP4nwSCfIUQaqRd0uY3ZtkyQUq9v60KkRAqiAQIlv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBHD%2FbwHXcsr5ZpeISrcA6Y0o21RD9wbf8ZwhFX7B6AII5ZFUQE5OJ17DCnxhveecK5q%2F43d4ER42wQH9RWlzEV2BP0wId9Ft2ICiVaB2lE7j5OtcpvHjEhcEAk9avnmft6b1xWc1UgjM3%2FisrnKLGkWG%2FPEzYDG7xnytTSHKqJurQBf83bbA5SbV%2F2MqOAJJL7ZtB5tnPnZaXHaO4t%2BAZz2aae9obgawt%2B9flieSTy6d6j7qWbXFkTHH0zWXmqjN83RONZiqvD56jbMk5Xz%2BKHzXI1Z3jfSp8yjrGqNsGKftbn6ohjSePDDtLZYEu%2FidiPATJtGdsa%2FEVGtANY8%2BZFOKb1zLKGJjngGQveIjNpQZihS%2BXtmvZgHIHBDrXdktZsFm5keAcjZL3InbhGmSYRfY0Cs4P0CL8P0We6sK9HTvPj53AAuNGlLfmXXnPdpUgfRms9Cw9o6wOEJ08gIxkxBVrUyvTB2T7ujWj1RMiah7j5xNJQLgsgm8qHpJb4MiZlejFI3yXzZ65Oy0iCqDfufoCElDsVhs7kv8TIDAea3JGjz7ip1SZ%2FtUbfgyg4Ys4rjBadDIBVa69wZnpSS4GS7VCg9MlwhQvpp0bx3PaT75MtClDvl9KMFzeJZBB4gv%2Buv0fnSGnnh7THeMO7y%2FtUGOqUBRdYkoaZnePGrQEDrSBcRj%2FDOkoMa73oP32cobczT38sna%2Byvz3Rmu4XjpR2knjq516nYw3jMnMUxMDEh5fuYwxcPuhwQYeKYarf0PzvbRlZ34nX0u0WL6mp%2FRgitQ%2BWpfSxWJp%2FSbfzlhABXOUoYlZZFXSDu3S3tyaxHjFjYsaacjoi9pS90s5t%2FnN%2B0uxj8EO1%2F%2FdUEox8dMF4q9iZYnZiCNIRt&X-Amz-Signature=b42237dec7dd774c374d2aa8f5c9f40282173bd262fbc5787515df7f5500df44&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
