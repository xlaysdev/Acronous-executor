/* Unwind@180200340 @ 180200340 */

void Unwind_180200340(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  
  LOCK();
  uVar1 = **(uint **)(param_2 + 0x30);
  **(uint **)(param_2 + 0x30) = 2;
  UNLOCK();
  if ((uVar1 & 4) != 0) {
    WakeByAddressAll(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


