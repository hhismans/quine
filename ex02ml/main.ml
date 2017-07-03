(*Ex02 Grace_kid*)
let index = 5
let name = ("Sully_" ^ string_of_int (index - 1))
let () = let out = open_out (name ^ ".ml") in (fun p i -> Printf.fprintf out p i (string_of_format p)) "(*Ex01 Grace_kid*)\nlet () = let index = %d in let out = open_out \"Grace_kid.ml\" in (fun p -> Printf.fprintf out p (string_of_format p)) %S;;\n" (index - 1);ignore((Sys.command ("ocamlopt -o " ^ name ^ " " ^ name ^ ".ml")));ignore((Sys.command ("./" ^ name)));;
