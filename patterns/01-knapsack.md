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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VGFQCYPL%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152213Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD1BfDgAyImVWavu7BCk5SIKmUTkYn8eqXqE3rc%2FeyoUAIgbf5UHRCN8G%2B6tA26vqIGstjpyN7xcWsp5eLU2qudevcqiAQIuP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOZYb0NxosdvXWyT9yrcA7%2FSqsJelZ6lYkExHPkgd3Ka0ZAG2fWrx8W3afMwvadVDKz39S6OrqU6EYBADktyO6wM6zz%2FzhLCDOi%2F9yTeRqy9g%2FWGP%2BI2buChkumhVYhPed3rk7eHFgrSC0v%2FQErI1DSuJdSNRJLHtgU%2BNWQ9%2BtIRMoxdw%2FIWOwTutOoPymMiuPkai188zaQeDyoSSpW0Rza0wPi2WKJohE7zGPeekEDpfweOtf8geIMlqYc527fUFx8zZid9QgjW%2FKJM4noUBtvk6KRO%2F13EaJYlJIOnb2pMCsyeIwjS5YX%2Fb9KtFn9teAdNd%2BhRCppr9UU991zlGgEKw1hn1O0Sa36hApAL4PzTMgE3z39VxDJDd1YXj9cVLgYNsQgm1jgQLvLghBmIrHzzJ%2BmazSdMCEAUdFgefqU0AYlLejPIHYL4l6v%2FLRQO6aOkSsZzgfz7wizkF4IsRgN9nKaTwmLMMNZGibf4%2BfymgGCS3XwIW9N9fNX9%2FtfdtJTuyeqk15ZZi82Kt0DaPTy4xRQg%2FuwBAKCpSCN17%2FNFEWDxiGqVxhD4PZkcyKrHPLxof8U2UxyilObePBDkrhVWhHx2mi7Q0KIEDfstMJgAdV5kEktnzaAkkin0IkLe6ZZPMQIUo1BFZqt6MMCR59cGOqUBVJuSMWXkmNHSf3NBkd1WV%2FeiloPPr8gFtJ00wU1RZ%2B2kHcoH4E7zOKA9Cpv%2Bd7kVaZGC605%2BaxDrtp66jMDtl%2FsGTiXE%2FK2lpx7vR%2F3pXYqiPnJHXdAg9H4PamCptusw3wvtWENgR5RxZxYc%2BJzd5R5lBbyzUju4ld3WJuBsC%2FkP4ZGl%2BZDvvUW2CpxRRdBaYQY8UIuwM9tQWdleQWp63i4Lyeo4&X-Amz-Signature=22f55e79c67fe2af609a1cc2fe7f54500a7ad56166abc7bf9b971b821a45dee8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VGFQCYPL%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152213Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD1BfDgAyImVWavu7BCk5SIKmUTkYn8eqXqE3rc%2FeyoUAIgbf5UHRCN8G%2B6tA26vqIGstjpyN7xcWsp5eLU2qudevcqiAQIuP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOZYb0NxosdvXWyT9yrcA7%2FSqsJelZ6lYkExHPkgd3Ka0ZAG2fWrx8W3afMwvadVDKz39S6OrqU6EYBADktyO6wM6zz%2FzhLCDOi%2F9yTeRqy9g%2FWGP%2BI2buChkumhVYhPed3rk7eHFgrSC0v%2FQErI1DSuJdSNRJLHtgU%2BNWQ9%2BtIRMoxdw%2FIWOwTutOoPymMiuPkai188zaQeDyoSSpW0Rza0wPi2WKJohE7zGPeekEDpfweOtf8geIMlqYc527fUFx8zZid9QgjW%2FKJM4noUBtvk6KRO%2F13EaJYlJIOnb2pMCsyeIwjS5YX%2Fb9KtFn9teAdNd%2BhRCppr9UU991zlGgEKw1hn1O0Sa36hApAL4PzTMgE3z39VxDJDd1YXj9cVLgYNsQgm1jgQLvLghBmIrHzzJ%2BmazSdMCEAUdFgefqU0AYlLejPIHYL4l6v%2FLRQO6aOkSsZzgfz7wizkF4IsRgN9nKaTwmLMMNZGibf4%2BfymgGCS3XwIW9N9fNX9%2FtfdtJTuyeqk15ZZi82Kt0DaPTy4xRQg%2FuwBAKCpSCN17%2FNFEWDxiGqVxhD4PZkcyKrHPLxof8U2UxyilObePBDkrhVWhHx2mi7Q0KIEDfstMJgAdV5kEktnzaAkkin0IkLe6ZZPMQIUo1BFZqt6MMCR59cGOqUBVJuSMWXkmNHSf3NBkd1WV%2FeiloPPr8gFtJ00wU1RZ%2B2kHcoH4E7zOKA9Cpv%2Bd7kVaZGC605%2BaxDrtp66jMDtl%2FsGTiXE%2FK2lpx7vR%2F3pXYqiPnJHXdAg9H4PamCptusw3wvtWENgR5RxZxYc%2BJzd5R5lBbyzUju4ld3WJuBsC%2FkP4ZGl%2BZDvvUW2CpxRRdBaYQY8UIuwM9tQWdleQWp63i4Lyeo4&X-Amz-Signature=2b19b80d08df22069aba286e58753e2f0a2e66e04d7cc703a63eaef7315d33b7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VGFQCYPL%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152213Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD1BfDgAyImVWavu7BCk5SIKmUTkYn8eqXqE3rc%2FeyoUAIgbf5UHRCN8G%2B6tA26vqIGstjpyN7xcWsp5eLU2qudevcqiAQIuP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOZYb0NxosdvXWyT9yrcA7%2FSqsJelZ6lYkExHPkgd3Ka0ZAG2fWrx8W3afMwvadVDKz39S6OrqU6EYBADktyO6wM6zz%2FzhLCDOi%2F9yTeRqy9g%2FWGP%2BI2buChkumhVYhPed3rk7eHFgrSC0v%2FQErI1DSuJdSNRJLHtgU%2BNWQ9%2BtIRMoxdw%2FIWOwTutOoPymMiuPkai188zaQeDyoSSpW0Rza0wPi2WKJohE7zGPeekEDpfweOtf8geIMlqYc527fUFx8zZid9QgjW%2FKJM4noUBtvk6KRO%2F13EaJYlJIOnb2pMCsyeIwjS5YX%2Fb9KtFn9teAdNd%2BhRCppr9UU991zlGgEKw1hn1O0Sa36hApAL4PzTMgE3z39VxDJDd1YXj9cVLgYNsQgm1jgQLvLghBmIrHzzJ%2BmazSdMCEAUdFgefqU0AYlLejPIHYL4l6v%2FLRQO6aOkSsZzgfz7wizkF4IsRgN9nKaTwmLMMNZGibf4%2BfymgGCS3XwIW9N9fNX9%2FtfdtJTuyeqk15ZZi82Kt0DaPTy4xRQg%2FuwBAKCpSCN17%2FNFEWDxiGqVxhD4PZkcyKrHPLxof8U2UxyilObePBDkrhVWhHx2mi7Q0KIEDfstMJgAdV5kEktnzaAkkin0IkLe6ZZPMQIUo1BFZqt6MMCR59cGOqUBVJuSMWXkmNHSf3NBkd1WV%2FeiloPPr8gFtJ00wU1RZ%2B2kHcoH4E7zOKA9Cpv%2Bd7kVaZGC605%2BaxDrtp66jMDtl%2FsGTiXE%2FK2lpx7vR%2F3pXYqiPnJHXdAg9H4PamCptusw3wvtWENgR5RxZxYc%2BJzd5R5lBbyzUju4ld3WJuBsC%2FkP4ZGl%2BZDvvUW2CpxRRdBaYQY8UIuwM9tQWdleQWp63i4Lyeo4&X-Amz-Signature=162c9096c86acc85a3411abb25979c055bb058b8cc3524c998ac16bd78729b82&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665UO4BQSY%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152214Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFU%2BtZ%2FWFMt0y%2FA1PrOesBFxiYBp9T6LezSFJB9Xyx4uAiBSodGpyq%2BcVgQ8eZIH7lCJDvHcXOFIRPONE5agnIPVMiqIBAi3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMr9jqH1kmmKoQNspcKtwDMgev%2BoakAh0nBguMQu2LqE6tyl2hIz3tOBvOdj9ZzzAwiTl2XOFyXa%2BFBOhh0EPD6QV0VhscQLurRIa8odcb4z0uK1%2FVPO%2FiV3u4ahSqtJv5%2Bk5ze1aobg1yLqrx%2Bp0vZFX1wpg8IB%2FrE2il2DFF%2FYnOPtvSQq3CwpX6lQ5gi9Mlqs1HMtqBIjOWgUJkKzcGYsYWe%2FH94WxrfM77QVFO5m7AZWHSrIIjUQQKK2T6iTl5YGWuJNwakpbkjMVNOp9OdSUpEteOQ4XFmmf%2FOGKSHjeNlk0VX%2FqVld4FIZoSmOuNUDve7VF7HM6ossBgbk1SeYoxpoAwusS%2BaAfKQ4%2BhGpetSmPd%2B6B665W%2FlYPltQiCWv%2F08XM9kwjrpq3yVLYkxKeDfqIT5p3KYAHxLFftD59pCqMPU9GULV2eqJRUdt3rEvUAFQQFgnLUx%2B2EREbzWTmvvh3tHKCHb8OqHZGhbVBkRqYvJohEEUi8NcCTH9dm4ketrhSggUJQf%2FQNBKcnEDjDyjksWph37mK8Kkh%2FmrhL%2BL3RWWyCkB1rGjp9E7dUaomGzvDnABG%2BZBiavEAUo%2Fv8Ywv4ThzMmwOGcPS2lMv971sjON2Q1Klnz2kRNUo9syBD60R7MAyQnJQw8ZLn1wY6pgGa7SnpkcWBqIaTmYiHWaRmC1W0L2wRSRsz4qwqdMxTfOITB4f%2FzeaoKAcGgJRF1Iyq8OEsp781nf15R6bjmwQ2lmMPMHWdU00sgLWW3hfFgBKBws0vgyKWMYA63JsNl5pDfVUVsUE9vYa9hXBBzGNrlxmwvg6JCjFiF9QQBgQXb07U1Fg%2BuWuY5P35mFVVz2dv7ljWL7bylkjGRDmxMuCGYsLf45HB&X-Amz-Signature=83afc909e62b111163fcdc47b34ee7da5253dbe5be3b73370bfa4101ffb274c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665UO4BQSY%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152214Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFU%2BtZ%2FWFMt0y%2FA1PrOesBFxiYBp9T6LezSFJB9Xyx4uAiBSodGpyq%2BcVgQ8eZIH7lCJDvHcXOFIRPONE5agnIPVMiqIBAi3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMr9jqH1kmmKoQNspcKtwDMgev%2BoakAh0nBguMQu2LqE6tyl2hIz3tOBvOdj9ZzzAwiTl2XOFyXa%2BFBOhh0EPD6QV0VhscQLurRIa8odcb4z0uK1%2FVPO%2FiV3u4ahSqtJv5%2Bk5ze1aobg1yLqrx%2Bp0vZFX1wpg8IB%2FrE2il2DFF%2FYnOPtvSQq3CwpX6lQ5gi9Mlqs1HMtqBIjOWgUJkKzcGYsYWe%2FH94WxrfM77QVFO5m7AZWHSrIIjUQQKK2T6iTl5YGWuJNwakpbkjMVNOp9OdSUpEteOQ4XFmmf%2FOGKSHjeNlk0VX%2FqVld4FIZoSmOuNUDve7VF7HM6ossBgbk1SeYoxpoAwusS%2BaAfKQ4%2BhGpetSmPd%2B6B665W%2FlYPltQiCWv%2F08XM9kwjrpq3yVLYkxKeDfqIT5p3KYAHxLFftD59pCqMPU9GULV2eqJRUdt3rEvUAFQQFgnLUx%2B2EREbzWTmvvh3tHKCHb8OqHZGhbVBkRqYvJohEEUi8NcCTH9dm4ketrhSggUJQf%2FQNBKcnEDjDyjksWph37mK8Kkh%2FmrhL%2BL3RWWyCkB1rGjp9E7dUaomGzvDnABG%2BZBiavEAUo%2Fv8Ywv4ThzMmwOGcPS2lMv971sjON2Q1Klnz2kRNUo9syBD60R7MAyQnJQw8ZLn1wY6pgGa7SnpkcWBqIaTmYiHWaRmC1W0L2wRSRsz4qwqdMxTfOITB4f%2FzeaoKAcGgJRF1Iyq8OEsp781nf15R6bjmwQ2lmMPMHWdU00sgLWW3hfFgBKBws0vgyKWMYA63JsNl5pDfVUVsUE9vYa9hXBBzGNrlxmwvg6JCjFiF9QQBgQXb07U1Fg%2BuWuY5P35mFVVz2dv7ljWL7bylkjGRDmxMuCGYsLf45HB&X-Amz-Signature=7696219b3225d9e5ebd4a2ebafdfd89ae0343334994352c0fd2db3afcfe8f86d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665UO4BQSY%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152214Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFU%2BtZ%2FWFMt0y%2FA1PrOesBFxiYBp9T6LezSFJB9Xyx4uAiBSodGpyq%2BcVgQ8eZIH7lCJDvHcXOFIRPONE5agnIPVMiqIBAi3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMr9jqH1kmmKoQNspcKtwDMgev%2BoakAh0nBguMQu2LqE6tyl2hIz3tOBvOdj9ZzzAwiTl2XOFyXa%2BFBOhh0EPD6QV0VhscQLurRIa8odcb4z0uK1%2FVPO%2FiV3u4ahSqtJv5%2Bk5ze1aobg1yLqrx%2Bp0vZFX1wpg8IB%2FrE2il2DFF%2FYnOPtvSQq3CwpX6lQ5gi9Mlqs1HMtqBIjOWgUJkKzcGYsYWe%2FH94WxrfM77QVFO5m7AZWHSrIIjUQQKK2T6iTl5YGWuJNwakpbkjMVNOp9OdSUpEteOQ4XFmmf%2FOGKSHjeNlk0VX%2FqVld4FIZoSmOuNUDve7VF7HM6ossBgbk1SeYoxpoAwusS%2BaAfKQ4%2BhGpetSmPd%2B6B665W%2FlYPltQiCWv%2F08XM9kwjrpq3yVLYkxKeDfqIT5p3KYAHxLFftD59pCqMPU9GULV2eqJRUdt3rEvUAFQQFgnLUx%2B2EREbzWTmvvh3tHKCHb8OqHZGhbVBkRqYvJohEEUi8NcCTH9dm4ketrhSggUJQf%2FQNBKcnEDjDyjksWph37mK8Kkh%2FmrhL%2BL3RWWyCkB1rGjp9E7dUaomGzvDnABG%2BZBiavEAUo%2Fv8Ywv4ThzMmwOGcPS2lMv971sjON2Q1Klnz2kRNUo9syBD60R7MAyQnJQw8ZLn1wY6pgGa7SnpkcWBqIaTmYiHWaRmC1W0L2wRSRsz4qwqdMxTfOITB4f%2FzeaoKAcGgJRF1Iyq8OEsp781nf15R6bjmwQ2lmMPMHWdU00sgLWW3hfFgBKBws0vgyKWMYA63JsNl5pDfVUVsUE9vYa9hXBBzGNrlxmwvg6JCjFiF9QQBgQXb07U1Fg%2BuWuY5P35mFVVz2dv7ljWL7bylkjGRDmxMuCGYsLf45HB&X-Amz-Signature=9d8f747766d2876015046d43b9606124edaf42f5b666cb5f9e9c7747bd66a6af&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665UO4BQSY%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152214Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFU%2BtZ%2FWFMt0y%2FA1PrOesBFxiYBp9T6LezSFJB9Xyx4uAiBSodGpyq%2BcVgQ8eZIH7lCJDvHcXOFIRPONE5agnIPVMiqIBAi3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMr9jqH1kmmKoQNspcKtwDMgev%2BoakAh0nBguMQu2LqE6tyl2hIz3tOBvOdj9ZzzAwiTl2XOFyXa%2BFBOhh0EPD6QV0VhscQLurRIa8odcb4z0uK1%2FVPO%2FiV3u4ahSqtJv5%2Bk5ze1aobg1yLqrx%2Bp0vZFX1wpg8IB%2FrE2il2DFF%2FYnOPtvSQq3CwpX6lQ5gi9Mlqs1HMtqBIjOWgUJkKzcGYsYWe%2FH94WxrfM77QVFO5m7AZWHSrIIjUQQKK2T6iTl5YGWuJNwakpbkjMVNOp9OdSUpEteOQ4XFmmf%2FOGKSHjeNlk0VX%2FqVld4FIZoSmOuNUDve7VF7HM6ossBgbk1SeYoxpoAwusS%2BaAfKQ4%2BhGpetSmPd%2B6B665W%2FlYPltQiCWv%2F08XM9kwjrpq3yVLYkxKeDfqIT5p3KYAHxLFftD59pCqMPU9GULV2eqJRUdt3rEvUAFQQFgnLUx%2B2EREbzWTmvvh3tHKCHb8OqHZGhbVBkRqYvJohEEUi8NcCTH9dm4ketrhSggUJQf%2FQNBKcnEDjDyjksWph37mK8Kkh%2FmrhL%2BL3RWWyCkB1rGjp9E7dUaomGzvDnABG%2BZBiavEAUo%2Fv8Ywv4ThzMmwOGcPS2lMv971sjON2Q1Klnz2kRNUo9syBD60R7MAyQnJQw8ZLn1wY6pgGa7SnpkcWBqIaTmYiHWaRmC1W0L2wRSRsz4qwqdMxTfOITB4f%2FzeaoKAcGgJRF1Iyq8OEsp781nf15R6bjmwQ2lmMPMHWdU00sgLWW3hfFgBKBws0vgyKWMYA63JsNl5pDfVUVsUE9vYa9hXBBzGNrlxmwvg6JCjFiF9QQBgQXb07U1Fg%2BuWuY5P35mFVVz2dv7ljWL7bylkjGRDmxMuCGYsLf45HB&X-Amz-Signature=f9266ef6cbb8df89a76afa65e00cce9d9c7f06a62cbf80a8e5975329a875e3f3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667JGHA3HU%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCh7r6jt2dYGrMKTy%2Bb8fMsF%2FbEWqCqj%2FJol%2FztwfQmuQIhAJPuziNjyPynmXCAXYxJiUKYSAvwFPbe7XjzQyRTsRFUKogECLj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyXLt4Y858amWAhoYgq3ANtAjstjogsaTJDhwTvYhKj3EujGJ2jlxRrTPrxmkdEaEQob5n5LBsx0m3tt2P80Kq4j%2BHpHNaT5Gukq02uY5QxObwoCVxvf3t76ukLRrOrU2%2BuSuIfx8yhw8ODRPADSpa8oVK6YLTnJ22EFUQ5KWqDJy0Gpqw6YKx%2BerksrLrus%2Fw0C7%2BqEQvhUZUwjZw%2BSEOaRkhdPGAZOj9omk1DWb4iUxYOg28DOrrSBGL1pZvQExh%2BRsS7Ufvv45TfClbCJ8Jg%2Fohu95al2arNtV5iyXdHY%2B8MrfhRyeVE4k%2FHW2lGVjBLqVVgQIE0zX37EVVq2TMo3ceAxApXYQjWGmhOkGHdJHbtqLAp6ZJRF4dE4SWyrFZrfoOfd83Cdz0NHhoPgxDE9xY9Na3QPv51QKAvkjjkE%2BCEzsimISnTveyTJK7WLj0q4FcwAJm4z%2BWCmxWK8nurFjVgUglnFNgXdoiT2sVCnmP4%2F%2Ba1CI6stU6MstT0JSv6xLyjoWQkNoebPwAlxCMNg9pYMVnbFKn%2FKafww8y6uNNrjIzucPe93ek3kmA3g17jQW3OAqllkDU289jUqbpjt%2BeRRQ4NeNO%2BOhLG90Kz%2FNRdP6AAE%2BuBSMNILTnRzFdMW0oyK%2Bjzj385jjCIkefXBjqkAQFPa9Pi%2B0RA5iQMQlNhoPtuz3ebnTYSG8cqINXHiB1TUjWk1nsq%2F1xn6yizhGBqtayvf1ahcJfKqVkqQcNco1K7kJZgifGsMUN3DPZpKYeWCU7P%2Bvt6gLNq2P5c0p0J6%2FhZogoTMzfZKB2eemBxTzlwQhjDQgQPP1PzqcNlp3LxQ321fGu56ltcjMX4PzgGhnC%2Fyl6QdXzi%2Bvdj2NLIJulipom5&X-Amz-Signature=ea119e7dd9ed61e7d72df64e3e0e4dc8e119ad4ddc32eff651a339e186fe4546&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WCPF32DZ%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2BguUaNu0jQ%2FeuDfNDc7V73449%2BFWpi3qYok8JN0ZzOgIgZGpWbCJlmuC%2BH9gD4eihe%2B5xezeDWQW5NbpYt1hdg1QqiAQIuP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOdM3uccU3nvvxjDySrcA710Mw9eFuFzOmrCvgvYvV9qgSAVj%2BxnQGgwt8WoLpeok7Zyi1yviKOpk%2BC8wuWvtpYUwNmfECe3eTd2AuYWNR6PA7qQ1Gh%2B52v4grijZ71zLrJWAKQqj6wF%2F%2BZm4Av2zkW5su08YoPQVpPGSYEBBVU58OQVZP6idSjK6p4K4EWJZXUnipxQ1iMiUr%2F%2F6%2FVCJCxUsYv9KbXlj78LMPj%2BlluxjVxmA9EmcyQwyl4TvG95j8vyogjjQvSTBw3zwtbRLNPtwWF%2BbJb8uZ5orciq%2Fb2lMMNMNVYHYnURb4VwUxnSGrB2uXLkG1i55Rrhc8CEio62PyUwkPj2mm%2FRCHSkOblrzZJIq7BHFAmEBA8FehedH%2BNyL%2BF08mRK7vJNrYLMVivLH4xWykfXxhk83hLIaFvLsUZYNJ8QirBeaxUBvVdRKNpbmM4y%2BDcoeHYJZIni9mGCjO1HnqJslVBkm28Ls%2BnnYV7RrEp80yK03swfcphKlVBxATeCkzrg76Z7ruzvIMGktDp3zbhC%2FSGoSntfstLH7xU%2BWtopT9QykfD8hUwA%2FU4AKQOHACwtEP0rehP2%2BpqBurKgrZhFKfHclF3CQi2zR%2FbXL6gCfEokYQnTQ82Il%2BwnUj3SX58WX3McMOqQ59cGOqUBMWFurdWLfNBmnRNDy5WlsCyQ%2BlDJRJZnlCIFwDKXRLYlClOhyfMVfvS%2FJe%2F3swyDLcGUJCm93z7jqMJuJGcV%2Fm3reoPCqEhk%2B5C5uCdr5QuP3YamR07TgrdGGzPRAWVGX%2F5RvJYPCMqHsKWaYT3lXZwolrNUtl6AjPQzLsuJ0K0V6C4uD90QycXp1FcK%2F6wmjR3qonzN4aHALOmuFH67zrj89sjw&X-Amz-Signature=63bfd1c976c3f688dddb35ec203906cc8600c7f2005286881572301f48b242ea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WCPF32DZ%2F20261115%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261115T152216Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD%2BguUaNu0jQ%2FeuDfNDc7V73449%2BFWpi3qYok8JN0ZzOgIgZGpWbCJlmuC%2BH9gD4eihe%2B5xezeDWQW5NbpYt1hdg1QqiAQIuP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOdM3uccU3nvvxjDySrcA710Mw9eFuFzOmrCvgvYvV9qgSAVj%2BxnQGgwt8WoLpeok7Zyi1yviKOpk%2BC8wuWvtpYUwNmfECe3eTd2AuYWNR6PA7qQ1Gh%2B52v4grijZ71zLrJWAKQqj6wF%2F%2BZm4Av2zkW5su08YoPQVpPGSYEBBVU58OQVZP6idSjK6p4K4EWJZXUnipxQ1iMiUr%2F%2F6%2FVCJCxUsYv9KbXlj78LMPj%2BlluxjVxmA9EmcyQwyl4TvG95j8vyogjjQvSTBw3zwtbRLNPtwWF%2BbJb8uZ5orciq%2Fb2lMMNMNVYHYnURb4VwUxnSGrB2uXLkG1i55Rrhc8CEio62PyUwkPj2mm%2FRCHSkOblrzZJIq7BHFAmEBA8FehedH%2BNyL%2BF08mRK7vJNrYLMVivLH4xWykfXxhk83hLIaFvLsUZYNJ8QirBeaxUBvVdRKNpbmM4y%2BDcoeHYJZIni9mGCjO1HnqJslVBkm28Ls%2BnnYV7RrEp80yK03swfcphKlVBxATeCkzrg76Z7ruzvIMGktDp3zbhC%2FSGoSntfstLH7xU%2BWtopT9QykfD8hUwA%2FU4AKQOHACwtEP0rehP2%2BpqBurKgrZhFKfHclF3CQi2zR%2FbXL6gCfEokYQnTQ82Il%2BwnUj3SX58WX3McMOqQ59cGOqUBMWFurdWLfNBmnRNDy5WlsCyQ%2BlDJRJZnlCIFwDKXRLYlClOhyfMVfvS%2FJe%2F3swyDLcGUJCm93z7jqMJuJGcV%2Fm3reoPCqEhk%2B5C5uCdr5QuP3YamR07TgrdGGzPRAWVGX%2F5RvJYPCMqHsKWaYT3lXZwolrNUtl6AjPQzLsuJ0K0V6C4uD90QycXp1FcK%2F6wmjR3qonzN4aHALOmuFH67zrj89sjw&X-Amz-Signature=d0fb4d9637e81187307b27bc9e08bc5b2127c31b63ab326e104ce12c087fd9cb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
