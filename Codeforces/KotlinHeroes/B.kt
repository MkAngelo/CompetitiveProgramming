
import kotlin.reflect.typeOf


private fun readLn() = readLine()!! // string line
private fun readIn() = readLn().toInt() // string int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles


fun main(args: Array<String>){
    val tt = readIn()

    for(i in 1..tt){
        val n = readIn()
        val arr = readInts()

        val raiz = Math.sqrt(n.toDouble())
        val ans = raiz%1 == 0.0

        if(ans != false){
            println("YES")
        }else{
            println("NO")
        }
    }
    
}
