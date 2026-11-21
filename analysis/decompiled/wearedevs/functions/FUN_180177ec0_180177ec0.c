/* FUN_180177ec0 @ 180177ec0 */

undefined8 FUN_180177ec0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar2 = *param_1;
  do {
    if ((uVar2 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: snapshot.is_join_interested()",0x2f,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802635d8);
    }
    uVar3 = 0xfffffffffffffff7;
    if ((uVar2 & 2) == 0) {
      uVar3 = 0xffffffffffffffe5;
    }
    uVar3 = uVar3 & uVar2;
    LOCK();
    uVar1 = *param_1;
    bVar4 = uVar2 == uVar1;
    if (bVar4) {
      *param_1 = uVar3;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  return CONCAT71((int7)(uVar2 >> 8),(uVar3 & 0x10) == 0);
}


