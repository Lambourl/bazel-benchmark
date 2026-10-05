#include "bench/fib.hpp"

// RE Benchmark TU 19754 of 20000 (depth=28, stamp="default")
namespace bench_tu_19754 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19754>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19754
