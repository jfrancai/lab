type User = {firstname?: string, lastname: string}
const a: string = "Hello world";
const n: number  = 42;
const b: boolean = true;
const d: null = null;
const arr: string[] = ["qew", "qew"];
const s: any = 42;
const user: User = {firstname: "toto", lastname: "from42"}
const date: Date = new Date();
const cb: Function = (e: MouseEvent): void => {
	console.log("hello");
}

cb();

function printId(id: number):void {
	console.log(id.toString());
}

printId(42);
