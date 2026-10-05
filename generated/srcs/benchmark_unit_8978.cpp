#include "bench/fib.hpp"

// RE Benchmark TU 8978 of 20000 (depth=28, stamp="default")
namespace bench_tu_8978 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8978>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8978
