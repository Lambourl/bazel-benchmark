#include "bench/fib.hpp"

// RE Benchmark TU 19737 of 20000 (depth=28, stamp="default")
namespace bench_tu_19737 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19737>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19737
