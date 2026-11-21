/* FUN_1801ae140 @ 1801ae140 */

void FUN_1801ae140(undefined1 *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint unaff_ESI;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    pcVar1 = "HTTP/0.9";
    break;
  case 1:
    pcVar1 = "HTTP/1.0";
    break;
  case 2:
    pcVar1 = "HTTP/1.1";
    break;
  case 3:
    pcVar1 = "HTTP/2.0";
    break;
  case 4:
    pcVar1 = 
    "HTTP/3.0C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\http-1.5.0\\src\\version.rs"
    ;
    break;
  case 5:
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("internal error: entered unreachable code",0x28,&DAT_1802843c0);
  default:
                    /* WARNING: Could not recover jumptable at 0x000180284ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)*(uint *)((ulonglong)unaff_ESI - 0x63000d6a))();
    return;
  }
  FUN_1801f0c50(param_2,pcVar1,8);
  return;
}


