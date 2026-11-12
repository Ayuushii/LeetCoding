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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IHZKJV4%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163452Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDUDCg119E4LQAmiEfxaSpYepB7wbCHtKca9mTwrFahkAiEA3xJD%2FmUWhxPYeHP8IX5P9Kc%2BomPlYv73eOwSaQiYcwoq%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDMpvToSfotvxNL48iyrcA%2Bpxpa73snT5UaPak0PQyQapmzaAs3Z8YaJKlaULaOH2xOxxBf9bwIYKbLaN8143KA8ft2K3slWcZHKhaHfoco6aZMntgCEwQzI0V9Stn2vGEDACFd%2FeTFLZtUarke3hoxNT2oHokx4%2BcqhlOvJ1EzoSFDMj9SNKj4OwxQpIStSJzsqr3xBYKe6JPQRuuzR%2FXp0il8XR%2FR9DNs8%2Bh78VwCoyzN8zVzdQZQ%2BLmGm9zYnZlEAFkFhbwwgO%2F%2FQ%2BXimnxIYN4gaMmdlfodCJFmMG5n0ec6ZxBHZB5HpLS9p6ez6RAlPIdfGDNdj%2FrPQYuThn2sYBoRXlCcGO8rS5ScwJXpL%2Bnys%2F8n%2F4LQLnBbE0ROL%2FwlWbU8L5TAhcsGmfgaEOFCbWvhvTNGoWPvbSLi9jPYDjzJ2p3KIp2SO0o7BJgyglPNxjKw%2FlrFdKOifnrHkZw5X%2Fs3uqF2MwVolWleUEwOcpL8vDyVvWrWuCCFXguvkjPd64wQ8T%2FutGImMU%2BdpLL84r49k3cIPI30InqTox9bBOVbhfn3J%2BI%2BVLp3%2FtM4hMK4iV6Vw%2FVf4avPm5YXLI7DHG86Lwjfep2PLKDvprXQnUSPqNXDKDctO0DCF%2BFxb%2BBPb6jI61BbBfq9r4MKiy19cGOqUB5%2FvoUjHbHg7MDtzHmI2EdE9Xugx6p0tRI11KrB7W%2FWPFaXbHWg30hVBsIO8H%2F8cVfwfl0egTN7etaNHsBsaJ8syP10Urfw28CcDKgT3QM8zxRDdLLLnteh%2BF52AtBLjZNJXokRsZMGEiuySiM4kiP720mUXBbdLg1SxU%2FqAeIY4dFp7JDydqFvssXA%2FwfTvBEKRprDT8bzKEOI2COkqh5v3pGVuT&X-Amz-Signature=1fc13c6f2f1ba2f3cd2a628a58926e9cd8cf49920d6762d5feb394915210d391&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IHZKJV4%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163452Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDUDCg119E4LQAmiEfxaSpYepB7wbCHtKca9mTwrFahkAiEA3xJD%2FmUWhxPYeHP8IX5P9Kc%2BomPlYv73eOwSaQiYcwoq%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDMpvToSfotvxNL48iyrcA%2Bpxpa73snT5UaPak0PQyQapmzaAs3Z8YaJKlaULaOH2xOxxBf9bwIYKbLaN8143KA8ft2K3slWcZHKhaHfoco6aZMntgCEwQzI0V9Stn2vGEDACFd%2FeTFLZtUarke3hoxNT2oHokx4%2BcqhlOvJ1EzoSFDMj9SNKj4OwxQpIStSJzsqr3xBYKe6JPQRuuzR%2FXp0il8XR%2FR9DNs8%2Bh78VwCoyzN8zVzdQZQ%2BLmGm9zYnZlEAFkFhbwwgO%2F%2FQ%2BXimnxIYN4gaMmdlfodCJFmMG5n0ec6ZxBHZB5HpLS9p6ez6RAlPIdfGDNdj%2FrPQYuThn2sYBoRXlCcGO8rS5ScwJXpL%2Bnys%2F8n%2F4LQLnBbE0ROL%2FwlWbU8L5TAhcsGmfgaEOFCbWvhvTNGoWPvbSLi9jPYDjzJ2p3KIp2SO0o7BJgyglPNxjKw%2FlrFdKOifnrHkZw5X%2Fs3uqF2MwVolWleUEwOcpL8vDyVvWrWuCCFXguvkjPd64wQ8T%2FutGImMU%2BdpLL84r49k3cIPI30InqTox9bBOVbhfn3J%2BI%2BVLp3%2FtM4hMK4iV6Vw%2FVf4avPm5YXLI7DHG86Lwjfep2PLKDvprXQnUSPqNXDKDctO0DCF%2BFxb%2BBPb6jI61BbBfq9r4MKiy19cGOqUB5%2FvoUjHbHg7MDtzHmI2EdE9Xugx6p0tRI11KrB7W%2FWPFaXbHWg30hVBsIO8H%2F8cVfwfl0egTN7etaNHsBsaJ8syP10Urfw28CcDKgT3QM8zxRDdLLLnteh%2BF52AtBLjZNJXokRsZMGEiuySiM4kiP720mUXBbdLg1SxU%2FqAeIY4dFp7JDydqFvssXA%2FwfTvBEKRprDT8bzKEOI2COkqh5v3pGVuT&X-Amz-Signature=f421f10a65568c5839ec1d52512af3713f00d3486943f2b7fbe2c549fd484759&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667IHZKJV4%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163452Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDUDCg119E4LQAmiEfxaSpYepB7wbCHtKca9mTwrFahkAiEA3xJD%2FmUWhxPYeHP8IX5P9Kc%2BomPlYv73eOwSaQiYcwoq%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDMpvToSfotvxNL48iyrcA%2Bpxpa73snT5UaPak0PQyQapmzaAs3Z8YaJKlaULaOH2xOxxBf9bwIYKbLaN8143KA8ft2K3slWcZHKhaHfoco6aZMntgCEwQzI0V9Stn2vGEDACFd%2FeTFLZtUarke3hoxNT2oHokx4%2BcqhlOvJ1EzoSFDMj9SNKj4OwxQpIStSJzsqr3xBYKe6JPQRuuzR%2FXp0il8XR%2FR9DNs8%2Bh78VwCoyzN8zVzdQZQ%2BLmGm9zYnZlEAFkFhbwwgO%2F%2FQ%2BXimnxIYN4gaMmdlfodCJFmMG5n0ec6ZxBHZB5HpLS9p6ez6RAlPIdfGDNdj%2FrPQYuThn2sYBoRXlCcGO8rS5ScwJXpL%2Bnys%2F8n%2F4LQLnBbE0ROL%2FwlWbU8L5TAhcsGmfgaEOFCbWvhvTNGoWPvbSLi9jPYDjzJ2p3KIp2SO0o7BJgyglPNxjKw%2FlrFdKOifnrHkZw5X%2Fs3uqF2MwVolWleUEwOcpL8vDyVvWrWuCCFXguvkjPd64wQ8T%2FutGImMU%2BdpLL84r49k3cIPI30InqTox9bBOVbhfn3J%2BI%2BVLp3%2FtM4hMK4iV6Vw%2FVf4avPm5YXLI7DHG86Lwjfep2PLKDvprXQnUSPqNXDKDctO0DCF%2BFxb%2BBPb6jI61BbBfq9r4MKiy19cGOqUB5%2FvoUjHbHg7MDtzHmI2EdE9Xugx6p0tRI11KrB7W%2FWPFaXbHWg30hVBsIO8H%2F8cVfwfl0egTN7etaNHsBsaJ8syP10Urfw28CcDKgT3QM8zxRDdLLLnteh%2BF52AtBLjZNJXokRsZMGEiuySiM4kiP720mUXBbdLg1SxU%2FqAeIY4dFp7JDydqFvssXA%2FwfTvBEKRprDT8bzKEOI2COkqh5v3pGVuT&X-Amz-Signature=a03916159550fce2b51d9bffc83a8c1f5746c5fe3262ff3d7832aa9011f60575&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624LONYQU%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163452Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDbzF%2BAHW%2FzRPROiO2DNo7pO7b1GeM0p0xlc8toig%2BiggIgUjipysIJv09HTnzFqXltTqiIXdAF8nYsDbj1Q%2FVsT04q%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDLjPLR7LAxZcZRSDESrcAyKvDtcXMP0JR0cd6cWY01fnCWFPcevNZIJIxm4Pw%2FxWD%2BVM92rpHh6xO9JrGP1sfd7BhnZe5ciAKGuqDNvB3lrT5nTV7h3%2BSg0uuJVP7Td8tiltQ2x93O%2FdpaGlB5lhwCMc7mrxhBVHEgBo8D81AO4r2HM7BPfv6pXlAOmKzMSUP8UJynrjqhlXrWM1IHbFAygpVT0XqyAGWcboO8ZSHvPHR3%2BlhdPOfuZyxdJdD32JJ6XwCrRKsTZj6cw06RWz%2FdRPCovaj7j7BRbEQgHu0kvxGAsEVxug4va61q%2Fm9WkVyV2F%2Bmk0%2FZx8Gf%2Ff%2FjdAMcg%2BvEhFojiwYeIz1FEZiIYmldoNRPUJ%2FqlrfBD6dJWa1BXA9KnTj3ax4QAB%2FGfBo5axOqW%2B5XWlkK0OvICaB8QZM7O4hZLBYbAtwr1LkqfB3wIZl3nTQl7nyPkP20aongfpVip%2Fe8IE5Z1aZOuOOTufycXJP50wDsGaMKy9CgrrFuLpJSY%2FbsPcV6Z7dExP1hp%2FnowdVdajHgi%2BRPaKDQ7FngaWMl0h9gAYFBOnCtte0eNMmmwRCJwK5wflLt%2FiF48VPR7mJgDROg%2FA%2BJbAzX5cAYcg8ku%2FPmmrllRVrbqkpdTHNzxQ90rZyBIzMJS019cGOqUB6yPpHSwMKbap3mwJO%2FIzqxZ0DtpS9%2FBs7m3s7jFkrw4m0RdwaQh45JRkH5%2FjitiZXKEHVDQdYyootnm%2FzAZwDA5Qq%2F5m9OjkdIyi3QCvVR9CDN%2BtrdUyvGw3ovBL9oXXojIns2CBTShjtgx4zG4jqrXzQVMGtiYV3QgJJ%2F3fGXKxwUZNB3qg%2Fn2SDdOek%2B8io%2F%2BkiHOizId8n582KYTtfytvwspJ&X-Amz-Signature=6bf1752921eb316a6f429fcaf46444bd4e3a18d9897d5adfa4623c1a3da6c6ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624LONYQU%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163452Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDbzF%2BAHW%2FzRPROiO2DNo7pO7b1GeM0p0xlc8toig%2BiggIgUjipysIJv09HTnzFqXltTqiIXdAF8nYsDbj1Q%2FVsT04q%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDLjPLR7LAxZcZRSDESrcAyKvDtcXMP0JR0cd6cWY01fnCWFPcevNZIJIxm4Pw%2FxWD%2BVM92rpHh6xO9JrGP1sfd7BhnZe5ciAKGuqDNvB3lrT5nTV7h3%2BSg0uuJVP7Td8tiltQ2x93O%2FdpaGlB5lhwCMc7mrxhBVHEgBo8D81AO4r2HM7BPfv6pXlAOmKzMSUP8UJynrjqhlXrWM1IHbFAygpVT0XqyAGWcboO8ZSHvPHR3%2BlhdPOfuZyxdJdD32JJ6XwCrRKsTZj6cw06RWz%2FdRPCovaj7j7BRbEQgHu0kvxGAsEVxug4va61q%2Fm9WkVyV2F%2Bmk0%2FZx8Gf%2Ff%2FjdAMcg%2BvEhFojiwYeIz1FEZiIYmldoNRPUJ%2FqlrfBD6dJWa1BXA9KnTj3ax4QAB%2FGfBo5axOqW%2B5XWlkK0OvICaB8QZM7O4hZLBYbAtwr1LkqfB3wIZl3nTQl7nyPkP20aongfpVip%2Fe8IE5Z1aZOuOOTufycXJP50wDsGaMKy9CgrrFuLpJSY%2FbsPcV6Z7dExP1hp%2FnowdVdajHgi%2BRPaKDQ7FngaWMl0h9gAYFBOnCtte0eNMmmwRCJwK5wflLt%2FiF48VPR7mJgDROg%2FA%2BJbAzX5cAYcg8ku%2FPmmrllRVrbqkpdTHNzxQ90rZyBIzMJS019cGOqUB6yPpHSwMKbap3mwJO%2FIzqxZ0DtpS9%2FBs7m3s7jFkrw4m0RdwaQh45JRkH5%2FjitiZXKEHVDQdYyootnm%2FzAZwDA5Qq%2F5m9OjkdIyi3QCvVR9CDN%2BtrdUyvGw3ovBL9oXXojIns2CBTShjtgx4zG4jqrXzQVMGtiYV3QgJJ%2F3fGXKxwUZNB3qg%2Fn2SDdOek%2B8io%2F%2BkiHOizId8n582KYTtfytvwspJ&X-Amz-Signature=fa8f9254d78665e4ffcdd5af692d360ca5e082529910e72249c46642811c67ad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624LONYQU%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163452Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDbzF%2BAHW%2FzRPROiO2DNo7pO7b1GeM0p0xlc8toig%2BiggIgUjipysIJv09HTnzFqXltTqiIXdAF8nYsDbj1Q%2FVsT04q%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDLjPLR7LAxZcZRSDESrcAyKvDtcXMP0JR0cd6cWY01fnCWFPcevNZIJIxm4Pw%2FxWD%2BVM92rpHh6xO9JrGP1sfd7BhnZe5ciAKGuqDNvB3lrT5nTV7h3%2BSg0uuJVP7Td8tiltQ2x93O%2FdpaGlB5lhwCMc7mrxhBVHEgBo8D81AO4r2HM7BPfv6pXlAOmKzMSUP8UJynrjqhlXrWM1IHbFAygpVT0XqyAGWcboO8ZSHvPHR3%2BlhdPOfuZyxdJdD32JJ6XwCrRKsTZj6cw06RWz%2FdRPCovaj7j7BRbEQgHu0kvxGAsEVxug4va61q%2Fm9WkVyV2F%2Bmk0%2FZx8Gf%2Ff%2FjdAMcg%2BvEhFojiwYeIz1FEZiIYmldoNRPUJ%2FqlrfBD6dJWa1BXA9KnTj3ax4QAB%2FGfBo5axOqW%2B5XWlkK0OvICaB8QZM7O4hZLBYbAtwr1LkqfB3wIZl3nTQl7nyPkP20aongfpVip%2Fe8IE5Z1aZOuOOTufycXJP50wDsGaMKy9CgrrFuLpJSY%2FbsPcV6Z7dExP1hp%2FnowdVdajHgi%2BRPaKDQ7FngaWMl0h9gAYFBOnCtte0eNMmmwRCJwK5wflLt%2FiF48VPR7mJgDROg%2FA%2BJbAzX5cAYcg8ku%2FPmmrllRVrbqkpdTHNzxQ90rZyBIzMJS019cGOqUB6yPpHSwMKbap3mwJO%2FIzqxZ0DtpS9%2FBs7m3s7jFkrw4m0RdwaQh45JRkH5%2FjitiZXKEHVDQdYyootnm%2FzAZwDA5Qq%2F5m9OjkdIyi3QCvVR9CDN%2BtrdUyvGw3ovBL9oXXojIns2CBTShjtgx4zG4jqrXzQVMGtiYV3QgJJ%2F3fGXKxwUZNB3qg%2Fn2SDdOek%2B8io%2F%2BkiHOizId8n582KYTtfytvwspJ&X-Amz-Signature=6a82b92273aa6f212d6cb223b6345a88e52c7ea7b7af7a2fca0bc4f1b4b6d86a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624LONYQU%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163452Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDbzF%2BAHW%2FzRPROiO2DNo7pO7b1GeM0p0xlc8toig%2BiggIgUjipysIJv09HTnzFqXltTqiIXdAF8nYsDbj1Q%2FVsT04q%2FwMIcBAAGgw2Mzc0MjMxODM4MDUiDLjPLR7LAxZcZRSDESrcAyKvDtcXMP0JR0cd6cWY01fnCWFPcevNZIJIxm4Pw%2FxWD%2BVM92rpHh6xO9JrGP1sfd7BhnZe5ciAKGuqDNvB3lrT5nTV7h3%2BSg0uuJVP7Td8tiltQ2x93O%2FdpaGlB5lhwCMc7mrxhBVHEgBo8D81AO4r2HM7BPfv6pXlAOmKzMSUP8UJynrjqhlXrWM1IHbFAygpVT0XqyAGWcboO8ZSHvPHR3%2BlhdPOfuZyxdJdD32JJ6XwCrRKsTZj6cw06RWz%2FdRPCovaj7j7BRbEQgHu0kvxGAsEVxug4va61q%2Fm9WkVyV2F%2Bmk0%2FZx8Gf%2Ff%2FjdAMcg%2BvEhFojiwYeIz1FEZiIYmldoNRPUJ%2FqlrfBD6dJWa1BXA9KnTj3ax4QAB%2FGfBo5axOqW%2B5XWlkK0OvICaB8QZM7O4hZLBYbAtwr1LkqfB3wIZl3nTQl7nyPkP20aongfpVip%2Fe8IE5Z1aZOuOOTufycXJP50wDsGaMKy9CgrrFuLpJSY%2FbsPcV6Z7dExP1hp%2FnowdVdajHgi%2BRPaKDQ7FngaWMl0h9gAYFBOnCtte0eNMmmwRCJwK5wflLt%2FiF48VPR7mJgDROg%2FA%2BJbAzX5cAYcg8ku%2FPmmrllRVrbqkpdTHNzxQ90rZyBIzMJS019cGOqUB6yPpHSwMKbap3mwJO%2FIzqxZ0DtpS9%2FBs7m3s7jFkrw4m0RdwaQh45JRkH5%2FjitiZXKEHVDQdYyootnm%2FzAZwDA5Qq%2F5m9OjkdIyi3QCvVR9CDN%2BtrdUyvGw3ovBL9oXXojIns2CBTShjtgx4zG4jqrXzQVMGtiYV3QgJJ%2F3fGXKxwUZNB3qg%2Fn2SDdOek%2B8io%2F%2BkiHOizId8n582KYTtfytvwspJ&X-Amz-Signature=e96e82aaa3db9217b1672bea945d9b94b19c47dd904da8929d633f520a6007a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QQM3HV66%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163453Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDAC1gQK%2Bfe8aFhR0byRi1eKgctugjVORzTUlLozRdnvQIhAJ6343HF56cO8A8reDBqtsN5r34jJUp686gUy0YE3yjeKv8DCHAQABoMNjM3NDIzMTgzODA1Igx8Fak7HOExT2vSsC0q3AOfHZMYQDyyNFxLIKuL2Pf1br0a3oW3mQxIpzUXQbC7g2h8%2FFAjqsY%2FRayk99EDhuGrAIpnWtevzZMh3wLTLOxJ%2B%2FlyqsBawCSQ0RchMaC2H9wnyr4QtBLqvTljPo2CeQac789Xk9Wg%2B9vj00PURRzGwzDMCHklmQMn7T7wsiZdIjEen7j0rzKYKBLx3qvmaU4iYHXeCOJhPpWIsQ3Ya4CVJexH7ZHaAPVhM916oj191E0RD%2FmWQ7fLQG1YrFt%2Bu%2BYRdtvD8nGd1PHoHuan5953mnlOM1nb8NYqI8O9bOLFLFETt36hXHukBJik1F8sXmEy7zUoKuJzh9qqugej260p0AcvAbsejE%2Fh0logTwL793PXUiW8c9O2yKmYZ%2B9xmsjhlXhu1LrTLmWVPhspnc3V4V7qxhM7Acn7ZE03sEMnJ8wfrB1X0R6eb7JfAvW7pMieFFLEnbSsaOqLLV%2BqkIaFafcKqexZWkpT7N1MJZ13XX7MTktQry6B3%2FGANVB5R58pGCZLQtnASVSDQbFsyTKXF4UEdaqseVDYGMEAUCIQVBrszIKxoupm1LHTD0NES43c4Ar2gWsiOhiqL5BufPVmZPTBWYoXAmfB36HhIkxHT%2FG6eoyID10yVkXSNTCztNfXBjqkAVOGxUNUyj09zEQ4u9vkjpWzSejC39LZW9Rt0lPyU7zt4eTOGYv1DpPgnJ3wNidkGns%2FyrtcJedc2mU2TDcBl9pUl3kRlbSuVqEOexvQw8ka%2FJu8a8Gfds5jbh%2Frqo%2ByQYkauZYNPth%2FR4BWEr%2F3C%2FOGO3A2KFoxQ9IJkJc1xCeKcsHsFX1TlKuTH8gMQIHyFOtwZh9THaE7UG3FOzb3sNRXzWXY&X-Amz-Signature=f2d121e456e0b49fc15aa3351af87e092b0dc58cd7067d37a4c69546c7514841&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QEQCYLL5%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163453Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHjca4QX4RiRo%2FX6P1YVfdJ%2FrjQz7pqVhYRvESkqeKyxAiBVy9y9RBoCIyYUZJBd3JlQlGYhqhU3UO%2B7K6MjRAcy4ir%2FAwhwEAAaDDYzNzQyMzE4MzgwNSIMGfEicnM11TPY2n%2FwKtwD%2FPk9RFwJRtkA970VV9m42tzrANzhFqCaIsTxjH57VvB0cwrkcMVgLffLYgtCTODdqcVb%2B5C07RruGeCalGx8njM8JPcyj2QqF4ka7vy81zTu%2B6QCTND4JPRGXm%2BSRZQSJF5jww46LUx2hF5nOEFFHXMvorilVREUzdytOSxr%2BxqoThehrFd9SQJzMPhAdeSJj2QqdltsaZ9RqPyVXjI1kq15JJMvcEuE1V1m3o9HkD0IdcPETyvklmisviUKGWPRbPek3izmtAU70XgajH67yR%2FwBBbaV4gocwJuwDeD4blO1MyQvYdw7oLndyVbd6sWBpbuf0qKFf4Yq%2FcAHyjiuf1nGxFv39jfKD2bjPJCK3HUcWJcXA6DzQpne7HAI%2Bpx%2FSdbNeQwEiKEL3QYViynmif9v50UcGJfv%2BrXXbVOUBAX5PQ3OQqKRAjEea86A2N4Ihwd5TnRsx0jOCQyUpvkMYdVN4YzsNMnHwaZPsCT4n4TS8QAfhLC4KaLVcCyyJ%2BT1xwxwr%2FQN%2Bmy8fK99L3K2trzKfnenTCClG8koVXS3NLunTCyR90kNd08D8dhgJL6tZZGvQ4%2FDtheBj5R9g2zkl6Aou1JQhflXON%2FuOulOnlt83I8xrknWiWw3z8wsLTX1wY6pgFdRM2Y4JKsR7kyWi7H9uSLWK9wi8MJF56swq7G76oe0aVfo9vqK6bPrYWqSiaQ%2BqAY3m99%2B0Gbr4lZPcVFtndlXISGHwE8UlOd11Z3By9iLXQ3VPOB9iHGE8ZUgfR6hzuDG8DR9VxFQP3r%2Bi1e5kpHGptl5iRFIUgh6ERJCE5sHwXHoOakrtB%2Bwh3QxRWRz4MRqeIYuPmlKJIo6QC%2FrdccopGhDO7T&X-Amz-Signature=ca09827d8b49c1c5dfe69074c518b67439d43ca205c7209caf1c708785870fd2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QEQCYLL5%2F20261112%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261112T163453Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHjca4QX4RiRo%2FX6P1YVfdJ%2FrjQz7pqVhYRvESkqeKyxAiBVy9y9RBoCIyYUZJBd3JlQlGYhqhU3UO%2B7K6MjRAcy4ir%2FAwhwEAAaDDYzNzQyMzE4MzgwNSIMGfEicnM11TPY2n%2FwKtwD%2FPk9RFwJRtkA970VV9m42tzrANzhFqCaIsTxjH57VvB0cwrkcMVgLffLYgtCTODdqcVb%2B5C07RruGeCalGx8njM8JPcyj2QqF4ka7vy81zTu%2B6QCTND4JPRGXm%2BSRZQSJF5jww46LUx2hF5nOEFFHXMvorilVREUzdytOSxr%2BxqoThehrFd9SQJzMPhAdeSJj2QqdltsaZ9RqPyVXjI1kq15JJMvcEuE1V1m3o9HkD0IdcPETyvklmisviUKGWPRbPek3izmtAU70XgajH67yR%2FwBBbaV4gocwJuwDeD4blO1MyQvYdw7oLndyVbd6sWBpbuf0qKFf4Yq%2FcAHyjiuf1nGxFv39jfKD2bjPJCK3HUcWJcXA6DzQpne7HAI%2Bpx%2FSdbNeQwEiKEL3QYViynmif9v50UcGJfv%2BrXXbVOUBAX5PQ3OQqKRAjEea86A2N4Ihwd5TnRsx0jOCQyUpvkMYdVN4YzsNMnHwaZPsCT4n4TS8QAfhLC4KaLVcCyyJ%2BT1xwxwr%2FQN%2Bmy8fK99L3K2trzKfnenTCClG8koVXS3NLunTCyR90kNd08D8dhgJL6tZZGvQ4%2FDtheBj5R9g2zkl6Aou1JQhflXON%2FuOulOnlt83I8xrknWiWw3z8wsLTX1wY6pgFdRM2Y4JKsR7kyWi7H9uSLWK9wi8MJF56swq7G76oe0aVfo9vqK6bPrYWqSiaQ%2BqAY3m99%2B0Gbr4lZPcVFtndlXISGHwE8UlOd11Z3By9iLXQ3VPOB9iHGE8ZUgfR6hzuDG8DR9VxFQP3r%2Bi1e5kpHGptl5iRFIUgh6ERJCE5sHwXHoOakrtB%2Bwh3QxRWRz4MRqeIYuPmlKJIo6QC%2FrdccopGhDO7T&X-Amz-Signature=08f0b0a3442615b753339dbc6ded7aa739f33736219d0911cdc055ec9f9d1f81&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
