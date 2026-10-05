#include "bench/fib.hpp"

// RE Benchmark TU 3570 of 20000 (depth=28, stamp="default")
namespace bench_tu_3570 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3570>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3570
