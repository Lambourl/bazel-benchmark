#include "bench/fib.hpp"

// RE Benchmark TU 6932 of 20000 (depth=28, stamp="default")
namespace bench_tu_6932 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6932>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6932
