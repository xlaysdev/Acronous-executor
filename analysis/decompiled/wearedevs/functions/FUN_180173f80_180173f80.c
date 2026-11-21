/* FUN_180173f80 @ 180173f80 */

void FUN_180173f80(int *param_1)

{
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 != 1) {
    FUN_18016e710(&local_38,param_1 + 0xc);
    FUN_18016a010(param_1 + 2,param_1 + 0xc);
    if (local_38 != 3) {
      FUN_18016ec90(&PTR_FUN_180261980,&local_38,local_28);
      if (CONCAT44(uStack_34,local_38) != 2) {
        if (CONCAT44(uStack_34,local_38) == 0) {
          LOCK();
          *local_30 = *local_30 + -1;
          UNLOCK();
          if (*local_30 == 0) {
            FUN_1801635e0(&local_30);
          }
        }
        else {
          LOCK();
          *local_30 = *local_30 + -1;
          UNLOCK();
          if (*local_30 == 0) {
            FUN_180162f80();
          }
        }
      }
    }
    return;
  }
  if ((char)param_1[0xc] == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("expected MultiThread schedulerC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\scheduler\\multi_thread\\mod.rs"
                  ,0x3d,&DAT_180264448);
  }
  FUN_180172fe0(*(longlong *)(param_1 + 0xe) + 0x10);
  return;
}


