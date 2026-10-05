#include "bench/fib.hpp"

// RE Benchmark TU 754 of 20000 (depth=28, stamp="default")
namespace bench_tu_754 {
constexpr unsigned long long result = ::bench::slow_fib<28, 754>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_754
