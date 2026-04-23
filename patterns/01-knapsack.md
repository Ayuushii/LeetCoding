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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666GOSE7A7%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIA7ubC2cfjE8SkdJA4fMtgoo2PiyuZ%2BvtTks2K%2BOOjSQAiBZbb%2FfIe2y%2B8oR6KcCyddTey94eUonnArvBiL6FtBJNSr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIMLi%2F8i7CoY%2FuSEa65KtwDVAsZdp%2FcU3rPyse8%2Fa%2BLhkJEeF4W8W7oRONKUpsa0A78gXHBVJ6k7%2FgS3kqE0fQuvq%2BBbxbtSEmNmP5jPeHLBz1Pt2PjKq1r%2FffkFxFnPeyPKdKkGJ1EYfdBlEX2sFkdgpPkYLeIu0MdsRIrjbF%2FgYw6wHbHgnN6sExbZ1TfFWMDl80qzwPuqnelW2hgx17oKEJjHUj7BfFSK%2BLRYgAjL6yiZuxzYvGKXFC0ceTZUE0VGQtUQTR1yJNGyTR7Tw%2FlcKYt4vDuEFt56HCiI1kD1JXYe7zvJyf3rIPPdsp8aeG6kt5IlYHteD8Fza9%2FrsciFA%2Fh8SheQpuuh16k6MdzrFyaNzsZk6W1vt0OuJW35CxlOZ%2FG20tEq9Zqw2Zd1TFjilRoD9rVHblyD1R0VM7t8ydoiG6yLyphx9FFbEg8kbfar74ni908j6u%2B8p5076ZGc0XdD1Mw5avpDM7BgrtasGqZ4l3E6e%2FOzRqzygtE%2F5zNMMOfvrY3xZBIk8DSyHreki8GmWE%2B%2BbzHcXej6XtDLklTTh8k4vSRCqNcyeodEbBp3PsEIMJJB%2FWqNQ5tUKVpA9Gq%2F6BLV5HW7Wu2kSgIc0gT2wtI54MmIKRtJPXj%2BuPJOnpEGrtNtIovrM8wo7SnzwY6pgEbEkO6w7xboBAk5j%2FJVLuu7FwO1IqRQvIoT4zirYKQsQrD%2F21t4vuSeLa2BErQL6PBRrrjUosyA15TpOvYK9wZKsY9k8Wak5lmoh4crBxvRTp7Upro8ql4XYuK9YgzKMvriEU2FnrJZpuNMK%2BhvYkyAE9Qx990%2F5sgaOE2ah%2F0iW81hWW2zOyIrjik9S%2B4%2BOnw7jaSmKFfjhvf5W43b1N5plu1Izjq&X-Amz-Signature=ba9513137a23921dbbe1a10b13f824a2fac1936d9e2ad69ef375facfe1e872d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666GOSE7A7%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIA7ubC2cfjE8SkdJA4fMtgoo2PiyuZ%2BvtTks2K%2BOOjSQAiBZbb%2FfIe2y%2B8oR6KcCyddTey94eUonnArvBiL6FtBJNSr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIMLi%2F8i7CoY%2FuSEa65KtwDVAsZdp%2FcU3rPyse8%2Fa%2BLhkJEeF4W8W7oRONKUpsa0A78gXHBVJ6k7%2FgS3kqE0fQuvq%2BBbxbtSEmNmP5jPeHLBz1Pt2PjKq1r%2FffkFxFnPeyPKdKkGJ1EYfdBlEX2sFkdgpPkYLeIu0MdsRIrjbF%2FgYw6wHbHgnN6sExbZ1TfFWMDl80qzwPuqnelW2hgx17oKEJjHUj7BfFSK%2BLRYgAjL6yiZuxzYvGKXFC0ceTZUE0VGQtUQTR1yJNGyTR7Tw%2FlcKYt4vDuEFt56HCiI1kD1JXYe7zvJyf3rIPPdsp8aeG6kt5IlYHteD8Fza9%2FrsciFA%2Fh8SheQpuuh16k6MdzrFyaNzsZk6W1vt0OuJW35CxlOZ%2FG20tEq9Zqw2Zd1TFjilRoD9rVHblyD1R0VM7t8ydoiG6yLyphx9FFbEg8kbfar74ni908j6u%2B8p5076ZGc0XdD1Mw5avpDM7BgrtasGqZ4l3E6e%2FOzRqzygtE%2F5zNMMOfvrY3xZBIk8DSyHreki8GmWE%2B%2BbzHcXej6XtDLklTTh8k4vSRCqNcyeodEbBp3PsEIMJJB%2FWqNQ5tUKVpA9Gq%2F6BLV5HW7Wu2kSgIc0gT2wtI54MmIKRtJPXj%2BuPJOnpEGrtNtIovrM8wo7SnzwY6pgEbEkO6w7xboBAk5j%2FJVLuu7FwO1IqRQvIoT4zirYKQsQrD%2F21t4vuSeLa2BErQL6PBRrrjUosyA15TpOvYK9wZKsY9k8Wak5lmoh4crBxvRTp7Upro8ql4XYuK9YgzKMvriEU2FnrJZpuNMK%2BhvYkyAE9Qx990%2F5sgaOE2ah%2F0iW81hWW2zOyIrjik9S%2B4%2BOnw7jaSmKFfjhvf5W43b1N5plu1Izjq&X-Amz-Signature=e599a0ab1db364abf92a0c56e47eb7f57dd101a9dcd400afa1f416239a37c69c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666GOSE7A7%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIA7ubC2cfjE8SkdJA4fMtgoo2PiyuZ%2BvtTks2K%2BOOjSQAiBZbb%2FfIe2y%2B8oR6KcCyddTey94eUonnArvBiL6FtBJNSr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIMLi%2F8i7CoY%2FuSEa65KtwDVAsZdp%2FcU3rPyse8%2Fa%2BLhkJEeF4W8W7oRONKUpsa0A78gXHBVJ6k7%2FgS3kqE0fQuvq%2BBbxbtSEmNmP5jPeHLBz1Pt2PjKq1r%2FffkFxFnPeyPKdKkGJ1EYfdBlEX2sFkdgpPkYLeIu0MdsRIrjbF%2FgYw6wHbHgnN6sExbZ1TfFWMDl80qzwPuqnelW2hgx17oKEJjHUj7BfFSK%2BLRYgAjL6yiZuxzYvGKXFC0ceTZUE0VGQtUQTR1yJNGyTR7Tw%2FlcKYt4vDuEFt56HCiI1kD1JXYe7zvJyf3rIPPdsp8aeG6kt5IlYHteD8Fza9%2FrsciFA%2Fh8SheQpuuh16k6MdzrFyaNzsZk6W1vt0OuJW35CxlOZ%2FG20tEq9Zqw2Zd1TFjilRoD9rVHblyD1R0VM7t8ydoiG6yLyphx9FFbEg8kbfar74ni908j6u%2B8p5076ZGc0XdD1Mw5avpDM7BgrtasGqZ4l3E6e%2FOzRqzygtE%2F5zNMMOfvrY3xZBIk8DSyHreki8GmWE%2B%2BbzHcXej6XtDLklTTh8k4vSRCqNcyeodEbBp3PsEIMJJB%2FWqNQ5tUKVpA9Gq%2F6BLV5HW7Wu2kSgIc0gT2wtI54MmIKRtJPXj%2BuPJOnpEGrtNtIovrM8wo7SnzwY6pgEbEkO6w7xboBAk5j%2FJVLuu7FwO1IqRQvIoT4zirYKQsQrD%2F21t4vuSeLa2BErQL6PBRrrjUosyA15TpOvYK9wZKsY9k8Wak5lmoh4crBxvRTp7Upro8ql4XYuK9YgzKMvriEU2FnrJZpuNMK%2BhvYkyAE9Qx990%2F5sgaOE2ah%2F0iW81hWW2zOyIrjik9S%2B4%2BOnw7jaSmKFfjhvf5W43b1N5plu1Izjq&X-Amz-Signature=e2255de6c8941e73fc7ece3faf4358d0d73a7776968410d67599d11fbb9b31c1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666A7UJW3W%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHZ%2BeUXivvvGMpRL5Wh8qI%2FpqvU6HxZ9T%2Bc4fzMpGe1xAiACMX7lIZiHv1WYIafMP8YzBzat7DwjCLvkIRlu%2BNFhICr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIMFtLSneIGsbCP9AXdKtwDtCinosFEEG2Li88Gx9my8MhivyP1e9nrD00FjhYwKfUIkkAOP9hlaMOJWGiH32Dv3HPL9Tk4zF0hgbbk1BhD28QoTfqcftPwpm6WsAu3wsF%2FWwPOP41jVoAtO4ojbxhDRKC20DRrTk3T2qW6So520gHUCsfy2jRCs7Uhy0ZCiB2PL8gnAdv6BQ%2BL%2FlMwaFDJVBwV6C7ziXSQ9d7Sz9ZaMNMrruMTOUEFjlyKx07KI3REWyjHxvdTqS9%2BKV6lBFq8f7ujXDzE3IHTu75Q0STQ8xUQoMfqDQGDKrVkz%2FlTNdiMvpstePVocDoFPVMJ83Z1SyrIvVBaH7eCTFaQFXINCDEHogm8Irt2WwMV7WYRYXGsbJxN%2FZfJGank6oBMvjA8IKb09hNAExi46nDaf5SeszPyJSd4ePJpPkAP8L5Q8WtvWLpVypchsz408BrglJ2CW7%2FDF2OX1Sa51xm%2B8HobiqqfwJ6FL1aMA2C4r%2BXENXzw9VgdakBADT2VfKgpHaR%2BDwMgCkbfV%2BlE1JxTYDo3LzVQZREAY5zhK16BPx92QuRYTI6nuliEhyJfh9qAvJiQhPagrUR%2B4tlzrvCRS6209xADk7s6WZ4yQWKGrm0bV4QR6uMBoS2LGxu%2Ftq0w1bWnzwY6pgEM7yE5lRldaEiVT5yDMaXkr4sYlTAQgnRNfAM0B8bbP2pFbYyRjY%2BBSsVVycBcMFJyUH0VvNQuA0SvgrrAv%2Bvu7yhKblA5dRqaMb2Ynr1YFFoqajvZcG4TyXCo9Lv8xyFEdi7xeq97yEAvLRS1c520daGm%2BzW8qCLBZOnzamL%2FI4F4Omt4UmQDabv9ZIUciSKKzlKhx8gEYr%2BCwwIRWx1vno3LfxBn&X-Amz-Signature=657caa2e634202944d3f99a0ee7c314af94782e019044b337b684fcce74ed052&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666A7UJW3W%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHZ%2BeUXivvvGMpRL5Wh8qI%2FpqvU6HxZ9T%2Bc4fzMpGe1xAiACMX7lIZiHv1WYIafMP8YzBzat7DwjCLvkIRlu%2BNFhICr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIMFtLSneIGsbCP9AXdKtwDtCinosFEEG2Li88Gx9my8MhivyP1e9nrD00FjhYwKfUIkkAOP9hlaMOJWGiH32Dv3HPL9Tk4zF0hgbbk1BhD28QoTfqcftPwpm6WsAu3wsF%2FWwPOP41jVoAtO4ojbxhDRKC20DRrTk3T2qW6So520gHUCsfy2jRCs7Uhy0ZCiB2PL8gnAdv6BQ%2BL%2FlMwaFDJVBwV6C7ziXSQ9d7Sz9ZaMNMrruMTOUEFjlyKx07KI3REWyjHxvdTqS9%2BKV6lBFq8f7ujXDzE3IHTu75Q0STQ8xUQoMfqDQGDKrVkz%2FlTNdiMvpstePVocDoFPVMJ83Z1SyrIvVBaH7eCTFaQFXINCDEHogm8Irt2WwMV7WYRYXGsbJxN%2FZfJGank6oBMvjA8IKb09hNAExi46nDaf5SeszPyJSd4ePJpPkAP8L5Q8WtvWLpVypchsz408BrglJ2CW7%2FDF2OX1Sa51xm%2B8HobiqqfwJ6FL1aMA2C4r%2BXENXzw9VgdakBADT2VfKgpHaR%2BDwMgCkbfV%2BlE1JxTYDo3LzVQZREAY5zhK16BPx92QuRYTI6nuliEhyJfh9qAvJiQhPagrUR%2B4tlzrvCRS6209xADk7s6WZ4yQWKGrm0bV4QR6uMBoS2LGxu%2Ftq0w1bWnzwY6pgEM7yE5lRldaEiVT5yDMaXkr4sYlTAQgnRNfAM0B8bbP2pFbYyRjY%2BBSsVVycBcMFJyUH0VvNQuA0SvgrrAv%2Bvu7yhKblA5dRqaMb2Ynr1YFFoqajvZcG4TyXCo9Lv8xyFEdi7xeq97yEAvLRS1c520daGm%2BzW8qCLBZOnzamL%2FI4F4Omt4UmQDabv9ZIUciSKKzlKhx8gEYr%2BCwwIRWx1vno3LfxBn&X-Amz-Signature=1b5f74f4b621bba8ba8c8ed999eedc147ed37f14c0b2ad83736fee1f2fff9dc4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666A7UJW3W%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHZ%2BeUXivvvGMpRL5Wh8qI%2FpqvU6HxZ9T%2Bc4fzMpGe1xAiACMX7lIZiHv1WYIafMP8YzBzat7DwjCLvkIRlu%2BNFhICr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIMFtLSneIGsbCP9AXdKtwDtCinosFEEG2Li88Gx9my8MhivyP1e9nrD00FjhYwKfUIkkAOP9hlaMOJWGiH32Dv3HPL9Tk4zF0hgbbk1BhD28QoTfqcftPwpm6WsAu3wsF%2FWwPOP41jVoAtO4ojbxhDRKC20DRrTk3T2qW6So520gHUCsfy2jRCs7Uhy0ZCiB2PL8gnAdv6BQ%2BL%2FlMwaFDJVBwV6C7ziXSQ9d7Sz9ZaMNMrruMTOUEFjlyKx07KI3REWyjHxvdTqS9%2BKV6lBFq8f7ujXDzE3IHTu75Q0STQ8xUQoMfqDQGDKrVkz%2FlTNdiMvpstePVocDoFPVMJ83Z1SyrIvVBaH7eCTFaQFXINCDEHogm8Irt2WwMV7WYRYXGsbJxN%2FZfJGank6oBMvjA8IKb09hNAExi46nDaf5SeszPyJSd4ePJpPkAP8L5Q8WtvWLpVypchsz408BrglJ2CW7%2FDF2OX1Sa51xm%2B8HobiqqfwJ6FL1aMA2C4r%2BXENXzw9VgdakBADT2VfKgpHaR%2BDwMgCkbfV%2BlE1JxTYDo3LzVQZREAY5zhK16BPx92QuRYTI6nuliEhyJfh9qAvJiQhPagrUR%2B4tlzrvCRS6209xADk7s6WZ4yQWKGrm0bV4QR6uMBoS2LGxu%2Ftq0w1bWnzwY6pgEM7yE5lRldaEiVT5yDMaXkr4sYlTAQgnRNfAM0B8bbP2pFbYyRjY%2BBSsVVycBcMFJyUH0VvNQuA0SvgrrAv%2Bvu7yhKblA5dRqaMb2Ynr1YFFoqajvZcG4TyXCo9Lv8xyFEdi7xeq97yEAvLRS1c520daGm%2BzW8qCLBZOnzamL%2FI4F4Omt4UmQDabv9ZIUciSKKzlKhx8gEYr%2BCwwIRWx1vno3LfxBn&X-Amz-Signature=d8c52d92d05a7206de80498994d3743cebdea642b91f73177b935e757ff83f0a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666A7UJW3W%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHZ%2BeUXivvvGMpRL5Wh8qI%2FpqvU6HxZ9T%2Bc4fzMpGe1xAiACMX7lIZiHv1WYIafMP8YzBzat7DwjCLvkIRlu%2BNFhICr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIMFtLSneIGsbCP9AXdKtwDtCinosFEEG2Li88Gx9my8MhivyP1e9nrD00FjhYwKfUIkkAOP9hlaMOJWGiH32Dv3HPL9Tk4zF0hgbbk1BhD28QoTfqcftPwpm6WsAu3wsF%2FWwPOP41jVoAtO4ojbxhDRKC20DRrTk3T2qW6So520gHUCsfy2jRCs7Uhy0ZCiB2PL8gnAdv6BQ%2BL%2FlMwaFDJVBwV6C7ziXSQ9d7Sz9ZaMNMrruMTOUEFjlyKx07KI3REWyjHxvdTqS9%2BKV6lBFq8f7ujXDzE3IHTu75Q0STQ8xUQoMfqDQGDKrVkz%2FlTNdiMvpstePVocDoFPVMJ83Z1SyrIvVBaH7eCTFaQFXINCDEHogm8Irt2WwMV7WYRYXGsbJxN%2FZfJGank6oBMvjA8IKb09hNAExi46nDaf5SeszPyJSd4ePJpPkAP8L5Q8WtvWLpVypchsz408BrglJ2CW7%2FDF2OX1Sa51xm%2B8HobiqqfwJ6FL1aMA2C4r%2BXENXzw9VgdakBADT2VfKgpHaR%2BDwMgCkbfV%2BlE1JxTYDo3LzVQZREAY5zhK16BPx92QuRYTI6nuliEhyJfh9qAvJiQhPagrUR%2B4tlzrvCRS6209xADk7s6WZ4yQWKGrm0bV4QR6uMBoS2LGxu%2Ftq0w1bWnzwY6pgEM7yE5lRldaEiVT5yDMaXkr4sYlTAQgnRNfAM0B8bbP2pFbYyRjY%2BBSsVVycBcMFJyUH0VvNQuA0SvgrrAv%2Bvu7yhKblA5dRqaMb2Ynr1YFFoqajvZcG4TyXCo9Lv8xyFEdi7xeq97yEAvLRS1c520daGm%2BzW8qCLBZOnzamL%2FI4F4Omt4UmQDabv9ZIUciSKKzlKhx8gEYr%2BCwwIRWx1vno3LfxBn&X-Amz-Signature=63d71b15bbd778c3d6cd752f3da467790975676e686d810271112bcede513f69&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQS6EN2S%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIB0lx8H7TU2BsTvkhpaVn5tqARtaiI4Q3CM%2FMwnP8iksAiEAweuvgU%2Bgmq3K80dYZg6AvKFkbR2JTEH0yAfCbWDhn50q%2FwMIYhAAGgw2Mzc0MjMxODM4MDUiDA5JPi2DI%2BY2956kYSrcA9uDM12YgVUkdKXH%2FFg2KPERxIkWH3g3O1c2KtJ4nVed6Oe9iPzm7ZKhtoTBh%2F4OwTnYpUgTEohGDR8BseOH0g%2FCP1F8YYExeegc1%2BFPNYmU43thV4RTuOPpeD9%2FebgzaRf%2BHknAq1g7QcljPAbP1S8Evo3qKwF%2BgNCM5JBvjMKun%2Bd7jko40YRZBGKzyUCf%2FJkIj6Dbv55bE%2FcWXrVE9JP78mzfv8wwYKiBi8qX27nDePW1v%2BhuuK2eYe4WeLkkuWxtRAR6cHXLEfwkVnG73nEYl6pznQboM7auyluyC%2B1ovX%2F4TNYRucFJY%2BYaQ%2B4aZvW1qK3%2F1R%2FYgiL02Gvwj%2FcR4NLEU5fTuV7EkZecTn4JHSNacR1QfLf4zt4R8RrGKnPYos3zbW%2BogsZv2lgXGNNassWLwaemOa4lrAhn62NlNFM4db5MauCDxQ9dagwxYmqOJuvBNr98vxxxmPTy45BI8NL0CoQMUZoavaJFpbdEszFlxfkvpoQ%2F%2BKMWMs%2Fc1Nc9OKb5U1QSTBzmyGzlNAREMEYt0SH1cKJxNMcOiZfF4DgmCT%2B%2F2rJC9iFe1CKYjWRACmXSsNNTv%2F%2BhAl%2FwcOA0rRQknjjJvXWzpffg2M1XkESaFBtG6P4rZIL%2FMPjGp88GOqUBj7UcFVsuhGfbbhx2svD3bfyvIf%2BkY0JdDxvS%2FtR7VVHqyhwaI5E45nz03OhKrEfNswwnysW8fCs%2B7pnqUuq4cca3njOPaLG6930yv%2BWYQDQNbxdJUY0749ofJMDwoua1dSNa4zSC66c7CwUARcnE9L%2BAMwRFoVIFpKMvGPVaH8x3JaLqsg36pFiJupdvsdwc9YLRX45XQwikxYyZJAPx25xZXR1y&X-Amz-Signature=797a027958e53d82f98cc9279c30651a32af17bfc0737112ae4a37e7bf4ae7a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JZ4LVEA%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCxQ6Wyb1q7swt9KxcQ5Izizgbl64pvXFKaLdImfXM78QIhAPNjV8eKxegVcAp0FgoQAHj8gG9hBeLdkZOyAIRCbypGKv8DCGIQABoMNjM3NDIzMTgzODA1Igx1XNNJUFRE8kJE1WAq3ANZ21cSFgdQOT2suR%2F%2FmM8mgXfGJ3b7zJUylBDxM8edkVzpBwtvSFluiXWzvGpeGXrRrW0zidx7kF91O2TzwoVWTZaeDwKAoOS9tedd5qehqIAuWv2MNwBGbEsXb9Epi4qoOE81EK9pIGyXbHzfQHmCnjmbumL5NzKqc2bIJGtzcsOqaECMSpmec7dg%2Bj2bkpU8aB0ZLkLnU6WYamenHOYcCapLRw3MUPJTf5Qwwq8ZcqguZFym0FxF2LjaSfYz9%2BK8LkAPfAmFUSrwbEenuKJXtcWsGcZ4vtlRA7cEqVe1k18%2FLRnHKadIqBKcBV75fFF49AfXz660usTZ7QaxZH9tAoMX9LYwRyvLy%2FrczHI1mYTo0mZdYLxkBgVQd9pfZz3QX%2BT5Jb%2FsLPlD8AKH%2FsVD02HXP8fIURQ5576XuN2uAwzuk2u%2BiakXp%2FMJ7qKQibHZZI4XJzKZRfCbvXS5rkjkWkzRKWxUNf7OsrYwOrQ53CTA5cCpDFUnTZX2%2BEsXcEDmvMsDmvpBYgNTMWsALygJTZ3yEubC3up7YOEHhckIjXw6StFmsPh5zq38pnz3i9aEv3Vwc0yFpuCRswIZhmdwPYeiXT7yoYcP1EY4NrFzBdKlIiA%2FwHoMSPfN7DCttafPBjqkAYkO0vLFJyzBFBGzwRlTm9nJ54kkTOw95iWVZukpX%2FyxZi2EKwGhiYYdTggPbhqzvRO5fu%2BAZleZwfSaio9aYeFXLC2vyQUE5kzN7S1lj6s3o6HmQUd%2FLKbS1cTnjrIK%2BLiGQRG7TwvAeLNdGRMP50ryzT1%2BN7KwZIAC4rPJRw%2BQtrcKVpiwF%2FDsTde1w%2FNNHjJ1W9JwI4ybAm99jweRvXkEJ%2BV6&X-Amz-Signature=65ca399d432c2da640fe45d57707a2debbc5bfdeb4144936a944e8ff5d4c8e15&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JZ4LVEA%2F20260423%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260423T092735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCxQ6Wyb1q7swt9KxcQ5Izizgbl64pvXFKaLdImfXM78QIhAPNjV8eKxegVcAp0FgoQAHj8gG9hBeLdkZOyAIRCbypGKv8DCGIQABoMNjM3NDIzMTgzODA1Igx1XNNJUFRE8kJE1WAq3ANZ21cSFgdQOT2suR%2F%2FmM8mgXfGJ3b7zJUylBDxM8edkVzpBwtvSFluiXWzvGpeGXrRrW0zidx7kF91O2TzwoVWTZaeDwKAoOS9tedd5qehqIAuWv2MNwBGbEsXb9Epi4qoOE81EK9pIGyXbHzfQHmCnjmbumL5NzKqc2bIJGtzcsOqaECMSpmec7dg%2Bj2bkpU8aB0ZLkLnU6WYamenHOYcCapLRw3MUPJTf5Qwwq8ZcqguZFym0FxF2LjaSfYz9%2BK8LkAPfAmFUSrwbEenuKJXtcWsGcZ4vtlRA7cEqVe1k18%2FLRnHKadIqBKcBV75fFF49AfXz660usTZ7QaxZH9tAoMX9LYwRyvLy%2FrczHI1mYTo0mZdYLxkBgVQd9pfZz3QX%2BT5Jb%2FsLPlD8AKH%2FsVD02HXP8fIURQ5576XuN2uAwzuk2u%2BiakXp%2FMJ7qKQibHZZI4XJzKZRfCbvXS5rkjkWkzRKWxUNf7OsrYwOrQ53CTA5cCpDFUnTZX2%2BEsXcEDmvMsDmvpBYgNTMWsALygJTZ3yEubC3up7YOEHhckIjXw6StFmsPh5zq38pnz3i9aEv3Vwc0yFpuCRswIZhmdwPYeiXT7yoYcP1EY4NrFzBdKlIiA%2FwHoMSPfN7DCttafPBjqkAYkO0vLFJyzBFBGzwRlTm9nJ54kkTOw95iWVZukpX%2FyxZi2EKwGhiYYdTggPbhqzvRO5fu%2BAZleZwfSaio9aYeFXLC2vyQUE5kzN7S1lj6s3o6HmQUd%2FLKbS1cTnjrIK%2BLiGQRG7TwvAeLNdGRMP50ryzT1%2BN7KwZIAC4rPJRw%2BQtrcKVpiwF%2FDsTde1w%2FNNHjJ1W9JwI4ybAm99jweRvXkEJ%2BV6&X-Amz-Signature=aa089709ba7b0cf16ad9f47fc926e90fc81688dc1be711225ffdac5a86ce3f32&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
