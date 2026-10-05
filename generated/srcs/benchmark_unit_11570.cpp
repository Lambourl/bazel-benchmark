#include "bench/fib.hpp"

// RE Benchmark TU 11570 of 20000 (depth=28, stamp="default")
namespace bench_tu_11570 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11570>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11570
