#include "bench/fib.hpp"

// RE Benchmark TU 19099 of 20000 (depth=28, stamp="default")
namespace bench_tu_19099 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19099>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19099
