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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663VZ4JQAN%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDpNEt7C0pP%2BIwBwucMPiFCIxFbdJERQsXhtF7D3Fg51QIgOmYi1mJLuaxe5w%2By6VJwqRQqYvJzcPjJrFmsPuxuj%2FUq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDGAScSrcEIy%2BJm0SbCrcA%2BWs2LBIpsybw0OGfgBeWl6%2BHOxTwkXYrT18aRrC%2BGx%2F81pfS9F9tAK%2FT1B8XH7NkaXDHdP4TYnrefXZUV%2BQ90jI0k7jT63maUQ%2FPJrEQZG7cuQPj5K%2BPX5pDB0cmeW5UzTL1Ygw62bE9O%2FSVN4PkZ3qeeFMP2PvqD1mrj02xcoHhAYxXfwzxN3QmtfJkZpPBYFV9m9WNOiCYnj%2BRgDQgjIXHxGKsKxrdux%2FeNam%2Fe05bAfGAxgpMhQUFWa8xiUABIMoMiFCJYDJ6iiAn5N%2B2vLuHiEoiwGzzQ%2BHKo7bKlaZZI557ZpbI6AVtrHJOW6cJRGR8f0t2cDJi2WaQlfivIq0p0vxMZsTMn92Eu1NCHN%2BFACO%2F%2Fh5Ddij5YLl9ukUAI5NmSTSLu5ve%2BPEGQTjDxLLVvQtTEvxBsjGhTVglUOVNzBiIYZ9tdsC6mpddLHW2DueTc1CKm6KmpxLBqIJfMGA36SP6JGR21hoV3AeCzrPsz%2BuYTytkk58Z2BWZxQZYaJZMRo45bu0S%2FzIgwMq9e6ltq3ZVAjD3YCzLfqeNG9qs04ShLZTj1HSdUaj5bfiHxJ7YtvJoOdYJZ4CVLMOlQ64owb5GqySZPrpXszNPEmD3wihr5bh7iJKVKc5ML%2F8880GOqUBTux86QhiX0xN0f7nZHp3ysB77739NZ1584U1ocdH2FLpTUqa79cLaxvecPALkC%2FF52ohmSZoH5N8XgOlH2uIcV0k5On8gaAwP1t92uIE%2BxI6jnJrMAp7q0aYLY8stXNIirE74f4dZKaEe%2B8xtLirUZqziMsK35QmAEsnynnG6R5ouCuCmkxVRXPQvIO9h6mgDXVnTwUD1mEJ1WUQvD4sZXkxef8F&X-Amz-Signature=1af45b7d153a8953ab9bdc5f8ad04544004051e427320ab09c32a35a1e3af6df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663VZ4JQAN%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDpNEt7C0pP%2BIwBwucMPiFCIxFbdJERQsXhtF7D3Fg51QIgOmYi1mJLuaxe5w%2By6VJwqRQqYvJzcPjJrFmsPuxuj%2FUq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDGAScSrcEIy%2BJm0SbCrcA%2BWs2LBIpsybw0OGfgBeWl6%2BHOxTwkXYrT18aRrC%2BGx%2F81pfS9F9tAK%2FT1B8XH7NkaXDHdP4TYnrefXZUV%2BQ90jI0k7jT63maUQ%2FPJrEQZG7cuQPj5K%2BPX5pDB0cmeW5UzTL1Ygw62bE9O%2FSVN4PkZ3qeeFMP2PvqD1mrj02xcoHhAYxXfwzxN3QmtfJkZpPBYFV9m9WNOiCYnj%2BRgDQgjIXHxGKsKxrdux%2FeNam%2Fe05bAfGAxgpMhQUFWa8xiUABIMoMiFCJYDJ6iiAn5N%2B2vLuHiEoiwGzzQ%2BHKo7bKlaZZI557ZpbI6AVtrHJOW6cJRGR8f0t2cDJi2WaQlfivIq0p0vxMZsTMn92Eu1NCHN%2BFACO%2F%2Fh5Ddij5YLl9ukUAI5NmSTSLu5ve%2BPEGQTjDxLLVvQtTEvxBsjGhTVglUOVNzBiIYZ9tdsC6mpddLHW2DueTc1CKm6KmpxLBqIJfMGA36SP6JGR21hoV3AeCzrPsz%2BuYTytkk58Z2BWZxQZYaJZMRo45bu0S%2FzIgwMq9e6ltq3ZVAjD3YCzLfqeNG9qs04ShLZTj1HSdUaj5bfiHxJ7YtvJoOdYJZ4CVLMOlQ64owb5GqySZPrpXszNPEmD3wihr5bh7iJKVKc5ML%2F8880GOqUBTux86QhiX0xN0f7nZHp3ysB77739NZ1584U1ocdH2FLpTUqa79cLaxvecPALkC%2FF52ohmSZoH5N8XgOlH2uIcV0k5On8gaAwP1t92uIE%2BxI6jnJrMAp7q0aYLY8stXNIirE74f4dZKaEe%2B8xtLirUZqziMsK35QmAEsnynnG6R5ouCuCmkxVRXPQvIO9h6mgDXVnTwUD1mEJ1WUQvD4sZXkxef8F&X-Amz-Signature=fcc9528cb363f27d978733a25dc3e6aa649affa573a979c8c371a6cec85c10f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663VZ4JQAN%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDpNEt7C0pP%2BIwBwucMPiFCIxFbdJERQsXhtF7D3Fg51QIgOmYi1mJLuaxe5w%2By6VJwqRQqYvJzcPjJrFmsPuxuj%2FUq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDGAScSrcEIy%2BJm0SbCrcA%2BWs2LBIpsybw0OGfgBeWl6%2BHOxTwkXYrT18aRrC%2BGx%2F81pfS9F9tAK%2FT1B8XH7NkaXDHdP4TYnrefXZUV%2BQ90jI0k7jT63maUQ%2FPJrEQZG7cuQPj5K%2BPX5pDB0cmeW5UzTL1Ygw62bE9O%2FSVN4PkZ3qeeFMP2PvqD1mrj02xcoHhAYxXfwzxN3QmtfJkZpPBYFV9m9WNOiCYnj%2BRgDQgjIXHxGKsKxrdux%2FeNam%2Fe05bAfGAxgpMhQUFWa8xiUABIMoMiFCJYDJ6iiAn5N%2B2vLuHiEoiwGzzQ%2BHKo7bKlaZZI557ZpbI6AVtrHJOW6cJRGR8f0t2cDJi2WaQlfivIq0p0vxMZsTMn92Eu1NCHN%2BFACO%2F%2Fh5Ddij5YLl9ukUAI5NmSTSLu5ve%2BPEGQTjDxLLVvQtTEvxBsjGhTVglUOVNzBiIYZ9tdsC6mpddLHW2DueTc1CKm6KmpxLBqIJfMGA36SP6JGR21hoV3AeCzrPsz%2BuYTytkk58Z2BWZxQZYaJZMRo45bu0S%2FzIgwMq9e6ltq3ZVAjD3YCzLfqeNG9qs04ShLZTj1HSdUaj5bfiHxJ7YtvJoOdYJZ4CVLMOlQ64owb5GqySZPrpXszNPEmD3wihr5bh7iJKVKc5ML%2F8880GOqUBTux86QhiX0xN0f7nZHp3ysB77739NZ1584U1ocdH2FLpTUqa79cLaxvecPALkC%2FF52ohmSZoH5N8XgOlH2uIcV0k5On8gaAwP1t92uIE%2BxI6jnJrMAp7q0aYLY8stXNIirE74f4dZKaEe%2B8xtLirUZqziMsK35QmAEsnynnG6R5ouCuCmkxVRXPQvIO9h6mgDXVnTwUD1mEJ1WUQvD4sZXkxef8F&X-Amz-Signature=e0a75a6b75edc6ffdc3ac8ef5a594770f97d7125ae56819c2bede37adb35aaf4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46632TXUXSE%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJIMEYCIQDe8AFiSgWzcMFgypkPFd0RLXotX8p3vQwTrtVvoPfxlQIhAPsZnrdl5O6oExeUENyEGxQRGDP%2BJgGzBSddS1pPka16Kv8DCDEQABoMNjM3NDIzMTgzODA1Igx4PIaIRhafxHbn%2FGgq3APf%2Ft%2Bq4rv7iI11eVgwqpf75rRsU%2FMjg%2FAEKQUCfcFJ0xWqXXR6u7mU4OqGyPfYdpqZ17AofBnwRuOqysizywOweo80jnIG3PsR5OkN9xxnUm2lEdPGLUCDDmRrHbNihXU9Q6SBUTWDooo%2BKD6Sh4qtzaUg3u91enGBSITg8UKeGgjG8j1E4L5Hl4BaJBaDLyphzNKnpvm%2BDaCFzunL%2FSJ32ttedpZhi9avq4KzI8LJinq%2FBdlIxh40XMboibUm9hsFtYG%2F4yUQ%2FpFZtqv%2FSAOsO9bdLUFIZiezp7salfnxMmiYTlG%2BgWPnz0D1aN8ui2yWLooNKGdP0a%2FiglRHq%2Biy61iYs5FYSv0QATvF3Tdh3OVNfGpSpjL5Xd3XNj8%2FgCoT59J%2FXco3tYmW2j1PcSfGGvP8fMGethy9RH0W%2FL0DlejZkXSs40ZtrS%2B1XDps7UeBWWWpykDrYb4vXUYeMBy1guvJtfSp5ymqG1kUDQL80goOgeZtyYtP7zUsg78FX2L9Mpk3DPVcbKt%2Bj7RDGCTCo4Feyd8l1kuS8sGhVukkkGKbLalraVHbI2oiz0W%2BsYmGEB30UPhrtUCi6XhG6D98o%2Fku7rt8yBOeKqnGMhd7Nfpt5FdKmNmSeqfWlTDI%2FPPNBjqkAaFZVGs96Hr05BAixgOBbmoW%2F2APNXCOIcJBV6YYu56ZWaj4T081rnU79jTu9Z%2Fyz%2B7ArylLCAwoimqPPgQrxf84tEdVtXQ6z46cJBtPFqQxVc2pp0twciJAihv5PS4eX4F7gIasmjOTeAyn49Fi9h5Nlha9KNYo5OL%2BpoX5S5NAy6mY%2BuUTGH6BmwQsKaylWQxr1E0GE9CWTKnxGDcDDy2E9zHT&X-Amz-Signature=f62ebe1d90e0a1c77b10c9e3c74f755b5fb6885202bf814263f0dce809398af9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46632TXUXSE%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJIMEYCIQDe8AFiSgWzcMFgypkPFd0RLXotX8p3vQwTrtVvoPfxlQIhAPsZnrdl5O6oExeUENyEGxQRGDP%2BJgGzBSddS1pPka16Kv8DCDEQABoMNjM3NDIzMTgzODA1Igx4PIaIRhafxHbn%2FGgq3APf%2Ft%2Bq4rv7iI11eVgwqpf75rRsU%2FMjg%2FAEKQUCfcFJ0xWqXXR6u7mU4OqGyPfYdpqZ17AofBnwRuOqysizywOweo80jnIG3PsR5OkN9xxnUm2lEdPGLUCDDmRrHbNihXU9Q6SBUTWDooo%2BKD6Sh4qtzaUg3u91enGBSITg8UKeGgjG8j1E4L5Hl4BaJBaDLyphzNKnpvm%2BDaCFzunL%2FSJ32ttedpZhi9avq4KzI8LJinq%2FBdlIxh40XMboibUm9hsFtYG%2F4yUQ%2FpFZtqv%2FSAOsO9bdLUFIZiezp7salfnxMmiYTlG%2BgWPnz0D1aN8ui2yWLooNKGdP0a%2FiglRHq%2Biy61iYs5FYSv0QATvF3Tdh3OVNfGpSpjL5Xd3XNj8%2FgCoT59J%2FXco3tYmW2j1PcSfGGvP8fMGethy9RH0W%2FL0DlejZkXSs40ZtrS%2B1XDps7UeBWWWpykDrYb4vXUYeMBy1guvJtfSp5ymqG1kUDQL80goOgeZtyYtP7zUsg78FX2L9Mpk3DPVcbKt%2Bj7RDGCTCo4Feyd8l1kuS8sGhVukkkGKbLalraVHbI2oiz0W%2BsYmGEB30UPhrtUCi6XhG6D98o%2Fku7rt8yBOeKqnGMhd7Nfpt5FdKmNmSeqfWlTDI%2FPPNBjqkAaFZVGs96Hr05BAixgOBbmoW%2F2APNXCOIcJBV6YYu56ZWaj4T081rnU79jTu9Z%2Fyz%2B7ArylLCAwoimqPPgQrxf84tEdVtXQ6z46cJBtPFqQxVc2pp0twciJAihv5PS4eX4F7gIasmjOTeAyn49Fi9h5Nlha9KNYo5OL%2BpoX5S5NAy6mY%2BuUTGH6BmwQsKaylWQxr1E0GE9CWTKnxGDcDDy2E9zHT&X-Amz-Signature=0205c5a2f5b675662688580cc76a34248bf0855e7e1251b7ace454f3c6c41396&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46632TXUXSE%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJIMEYCIQDe8AFiSgWzcMFgypkPFd0RLXotX8p3vQwTrtVvoPfxlQIhAPsZnrdl5O6oExeUENyEGxQRGDP%2BJgGzBSddS1pPka16Kv8DCDEQABoMNjM3NDIzMTgzODA1Igx4PIaIRhafxHbn%2FGgq3APf%2Ft%2Bq4rv7iI11eVgwqpf75rRsU%2FMjg%2FAEKQUCfcFJ0xWqXXR6u7mU4OqGyPfYdpqZ17AofBnwRuOqysizywOweo80jnIG3PsR5OkN9xxnUm2lEdPGLUCDDmRrHbNihXU9Q6SBUTWDooo%2BKD6Sh4qtzaUg3u91enGBSITg8UKeGgjG8j1E4L5Hl4BaJBaDLyphzNKnpvm%2BDaCFzunL%2FSJ32ttedpZhi9avq4KzI8LJinq%2FBdlIxh40XMboibUm9hsFtYG%2F4yUQ%2FpFZtqv%2FSAOsO9bdLUFIZiezp7salfnxMmiYTlG%2BgWPnz0D1aN8ui2yWLooNKGdP0a%2FiglRHq%2Biy61iYs5FYSv0QATvF3Tdh3OVNfGpSpjL5Xd3XNj8%2FgCoT59J%2FXco3tYmW2j1PcSfGGvP8fMGethy9RH0W%2FL0DlejZkXSs40ZtrS%2B1XDps7UeBWWWpykDrYb4vXUYeMBy1guvJtfSp5ymqG1kUDQL80goOgeZtyYtP7zUsg78FX2L9Mpk3DPVcbKt%2Bj7RDGCTCo4Feyd8l1kuS8sGhVukkkGKbLalraVHbI2oiz0W%2BsYmGEB30UPhrtUCi6XhG6D98o%2Fku7rt8yBOeKqnGMhd7Nfpt5FdKmNmSeqfWlTDI%2FPPNBjqkAaFZVGs96Hr05BAixgOBbmoW%2F2APNXCOIcJBV6YYu56ZWaj4T081rnU79jTu9Z%2Fyz%2B7ArylLCAwoimqPPgQrxf84tEdVtXQ6z46cJBtPFqQxVc2pp0twciJAihv5PS4eX4F7gIasmjOTeAyn49Fi9h5Nlha9KNYo5OL%2BpoX5S5NAy6mY%2BuUTGH6BmwQsKaylWQxr1E0GE9CWTKnxGDcDDy2E9zHT&X-Amz-Signature=3ee2569f1da5a0f24f7cfa25f737144072dbe7bb078bbe8d64f5ad8ceaaccff5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46632TXUXSE%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083944Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJIMEYCIQDe8AFiSgWzcMFgypkPFd0RLXotX8p3vQwTrtVvoPfxlQIhAPsZnrdl5O6oExeUENyEGxQRGDP%2BJgGzBSddS1pPka16Kv8DCDEQABoMNjM3NDIzMTgzODA1Igx4PIaIRhafxHbn%2FGgq3APf%2Ft%2Bq4rv7iI11eVgwqpf75rRsU%2FMjg%2FAEKQUCfcFJ0xWqXXR6u7mU4OqGyPfYdpqZ17AofBnwRuOqysizywOweo80jnIG3PsR5OkN9xxnUm2lEdPGLUCDDmRrHbNihXU9Q6SBUTWDooo%2BKD6Sh4qtzaUg3u91enGBSITg8UKeGgjG8j1E4L5Hl4BaJBaDLyphzNKnpvm%2BDaCFzunL%2FSJ32ttedpZhi9avq4KzI8LJinq%2FBdlIxh40XMboibUm9hsFtYG%2F4yUQ%2FpFZtqv%2FSAOsO9bdLUFIZiezp7salfnxMmiYTlG%2BgWPnz0D1aN8ui2yWLooNKGdP0a%2FiglRHq%2Biy61iYs5FYSv0QATvF3Tdh3OVNfGpSpjL5Xd3XNj8%2FgCoT59J%2FXco3tYmW2j1PcSfGGvP8fMGethy9RH0W%2FL0DlejZkXSs40ZtrS%2B1XDps7UeBWWWpykDrYb4vXUYeMBy1guvJtfSp5ymqG1kUDQL80goOgeZtyYtP7zUsg78FX2L9Mpk3DPVcbKt%2Bj7RDGCTCo4Feyd8l1kuS8sGhVukkkGKbLalraVHbI2oiz0W%2BsYmGEB30UPhrtUCi6XhG6D98o%2Fku7rt8yBOeKqnGMhd7Nfpt5FdKmNmSeqfWlTDI%2FPPNBjqkAaFZVGs96Hr05BAixgOBbmoW%2F2APNXCOIcJBV6YYu56ZWaj4T081rnU79jTu9Z%2Fyz%2B7ArylLCAwoimqPPgQrxf84tEdVtXQ6z46cJBtPFqQxVc2pp0twciJAihv5PS4eX4F7gIasmjOTeAyn49Fi9h5Nlha9KNYo5OL%2BpoX5S5NAy6mY%2BuUTGH6BmwQsKaylWQxr1E0GE9CWTKnxGDcDDy2E9zHT&X-Amz-Signature=50994b97b9c78b026663acd6dccdb8ff51c02caa5c015cf0858dbcf68a7cbf8c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666DTEECLU%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083950Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJIMEYCIQDVtfqIHu04aVPUTbn8iujiMQUmu2ncTMToV%2BE4tN8KzQIhANSGKwEEB17Jt9boCb5wIH7ad1rKB5u5JIyoXtlo%2FgW7Kv8DCDEQABoMNjM3NDIzMTgzODA1IgyYzcm55yal1o%2F3qX8q3AM07EC4C%2F%2BWgAapuvJTqBJ8LSA5fp%2BcCbnPR4Q5cT2DaSbbP2mS2hg7YaYzhYC9lBI%2ByHJCJB4luGj2gbB%2FljjJM61HYiCL3aJppviiSmxqT97turC%2F5Px%2FVbhQ6yKouvpD7Z53F%2FTF7zomSFJ6YK0ftNbXlCVBChioMArBThRS%2BuP9s6ZziaiWdRuNiKr6TXJ0%2F586b2hCrBrVY0hnnre87vxxl7X22UZeelP22oLL8HEd5gPH%2F4ITqwBE8A56gO208GHMwAc1m99mUIGxD5dqGeqqkvwN3rolymD5uZZlB4cwWZ%2BQkI0KfDZTMM2WDSByo%2BaJjxpqaBx%2Bj3jDGn%2FiD8dyA%2F%2Fb5W8r6B49K31QNm7%2BdWSl3rAaB1yefNsOZFaC7OYD6GHX1OjNPXTGw5%2FtBCO5dqYJUnzpfSLLLA7kO0tkL4eR9cEPY8PqCLTo3eKjqu4ytTC53zms9XizL8FT0Mp%2BRgZ%2BYrVsRhDHO97w60NHilLDWJvD%2FBh1cQYng0teGkrrgUVcFlg8L%2F4rjywoSJxhYxaQAKCKIorO%2B2ZYgcOxzQLF19X6krGgrn3955yLSrBIcR0kYiARdfGY7XDV4K4CZF6QBclaNi0zgnXe6X6qi54FLIUVgKGT%2FjDd%2FPPNBjqkAc8dnsDSHHVRbQWlIN6ZN5y5vfmXJDsQcbNsHe4jLn30ZAmaduDvNSLAlqkmj9fpi97Ta1rVqRdkDGcR01UUON1R3iMW2AuKnPb%2BtksNmPTAcx%2FAtASRp8JeMHg%2Bb4VebQZBqGiLLt4GbpNCEmObmY8aCFyDuRU6RzIELfxBidUChlkvXs7c1jX4PQODot3bP41mHmt7xRRBSRnD%2BA1OI%2FIG3hvz&X-Amz-Signature=bfd2153a8bfcddaecc565d3fea6ccc8d9ac8b38f8da91b29969f5ec032683054&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQONYBHA%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083950Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDrek7Guu68AW0R3o1bPTAKDK1tJ%2Bl39OzzKr43CVxCeQIgT7TmU0KE8461wudiT2wJM1JnvQ4CGieDPE6wP5Ry1bUq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDF3JEDKX2Y7QBoQG%2FSrcAwLEEetzfHeoBHfKS8uJT%2Bnzn64d%2Fr9Bmpbx1B96FutVrwUrms5%2BXyVjhHBtbuFCP28Zj3HZwA6b4VfJGQJBbK1t7gGplX0FoSQjFhlfpWG4nvTuYLm5BeFTjKtbrUXW5FYVoST%2BlEyMqCoDyiiUVlbLMEU9cCre6yg3neeqLsdELlyE%2Bq87hF%2BiLc1lGVhngZz6XoqPem1qkF16cXy9Rx53JsM35iKZmZvHaTdZmc9mTl5edNV3QGiVDIKVcjC0FfSHct6o86So6ybSCerI9q0ga9XEUsgkzrjbf%2BJ4D%2Fx47yqC9ux0SsH%2FPy9vWzR2ePhgGAMd64V7cCIz50cMdzoM%2FiPFfwznhYK5J9eUm7m7AM5iNvTfb1imW8vm6uSVc5lONmvR5eh2KwFJHF3d8qwHLvJF9vJg8G8hw%2BomOK1FoARbGy6hOkrpK%2BBhY8D%2Fsxx4CfxFjQ16hB1J95gfZRWxKt3u%2B1EhZnom0VOdGSCj0UzQYSuYgOkfkmASftUYwEh6CjEpzxILkcrv9FYmvtxbW7LJwIs9gB7Ub4iXnwuDEp4xDyL6Md4QnqfxPiR7ehfjcNpfps1Qxjcl%2F1nRs5GnagX7i9cxOn1VFzwcSPQHpP%2Ff2PlZVKifQj4cMMf8880GOqUBKoMgthB0Uka6awUzgKFfYZ9K%2B0fxC%2B4J2DSE%2FKC%2FXXshfL506t4hej%2FgDp%2FKzK5wh%2B69eX31kFZq1MTn1PdK5m5p7a6WrG2vGIgqmphsRfwli88yKq0Gd9B39Ww2JFz95MK4Pc9ByBdOdNzWz3RqnHgEIkaN8XkteWRKDWzbiu8py9VmNSXk7kE34sqVdYCDFO3ToIQKlTUXh%2BTiEp7Er%2FaCa31r&X-Amz-Signature=5bf45f8dd99ba47de0844f22ad0a96f9304de7f522f8715981e06ed079c4193e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQONYBHA%2F20260320%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260320T083950Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGgaCXVzLXdlc3QtMiJHMEUCIQDrek7Guu68AW0R3o1bPTAKDK1tJ%2Bl39OzzKr43CVxCeQIgT7TmU0KE8461wudiT2wJM1JnvQ4CGieDPE6wP5Ry1bUq%2FwMIMRAAGgw2Mzc0MjMxODM4MDUiDF3JEDKX2Y7QBoQG%2FSrcAwLEEetzfHeoBHfKS8uJT%2Bnzn64d%2Fr9Bmpbx1B96FutVrwUrms5%2BXyVjhHBtbuFCP28Zj3HZwA6b4VfJGQJBbK1t7gGplX0FoSQjFhlfpWG4nvTuYLm5BeFTjKtbrUXW5FYVoST%2BlEyMqCoDyiiUVlbLMEU9cCre6yg3neeqLsdELlyE%2Bq87hF%2BiLc1lGVhngZz6XoqPem1qkF16cXy9Rx53JsM35iKZmZvHaTdZmc9mTl5edNV3QGiVDIKVcjC0FfSHct6o86So6ybSCerI9q0ga9XEUsgkzrjbf%2BJ4D%2Fx47yqC9ux0SsH%2FPy9vWzR2ePhgGAMd64V7cCIz50cMdzoM%2FiPFfwznhYK5J9eUm7m7AM5iNvTfb1imW8vm6uSVc5lONmvR5eh2KwFJHF3d8qwHLvJF9vJg8G8hw%2BomOK1FoARbGy6hOkrpK%2BBhY8D%2Fsxx4CfxFjQ16hB1J95gfZRWxKt3u%2B1EhZnom0VOdGSCj0UzQYSuYgOkfkmASftUYwEh6CjEpzxILkcrv9FYmvtxbW7LJwIs9gB7Ub4iXnwuDEp4xDyL6Md4QnqfxPiR7ehfjcNpfps1Qxjcl%2F1nRs5GnagX7i9cxOn1VFzwcSPQHpP%2Ff2PlZVKifQj4cMMf8880GOqUBKoMgthB0Uka6awUzgKFfYZ9K%2B0fxC%2B4J2DSE%2FKC%2FXXshfL506t4hej%2FgDp%2FKzK5wh%2B69eX31kFZq1MTn1PdK5m5p7a6WrG2vGIgqmphsRfwli88yKq0Gd9B39Ww2JFz95MK4Pc9ByBdOdNzWz3RqnHgEIkaN8XkteWRKDWzbiu8py9VmNSXk7kE34sqVdYCDFO3ToIQKlTUXh%2BTiEp7Er%2FaCa31r&X-Amz-Signature=1d265d3d0d13cb26b01eeb990e2a5938ea7ef4aa368cd25ecf1f19b369d54b1a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
